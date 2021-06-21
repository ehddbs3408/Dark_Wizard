using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Boss : MonoBehaviour
{
    
    [SerializeField]
    private GameObject bulletPrefab = null;
    [SerializeField]
    private Transform targetPosition= null;
    [SerializeField]
    private Transform bulletPosition = null;
    [SerializeField]
    private Transform pos1 = null;
    private GameManager gameManager = null;
    private Bullet bulletMove = null;
    [SerializeField]
    private Slider HpBar = null;
    [SerializeField]
    private Sprite[] bulletSprite = null; 

    [SerializeField]
    private float moveSpeed = 0.1f;
    [SerializeField]
    private float moveArea = 0.1f;
    [SerializeField]
    private float speed = 0.1f;
    [SerializeField]
    private float oneShoting = 0.5f;
    [SerializeField]
    private bool isPhase = true;
    


    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        bulletMove = FindObjectOfType<Bullet>();
        
        //StartCoroutine(TestPtern());
        StartCoroutine(PatternA());
        //StartCoroutine(PatternB());
        //StartCoroutine(PatternC());
    }
    void Update()
    {
        Phase_2();
        //float x = Mathf.Cos(Time.time *1) * 2;
        //float y = Mathf.Sin(Time.time *2) * 1;
        //transform.position = new Vector3(x, y + 2.5f, 0);
    }
    //private IEnumerator TestPtern()
    
    private void Phase_1()
    {

    }
    private void Phase_2()
    {
        if (HpBar.value > 0) return;
        GameObject[] obj = GameObject.FindGameObjectsWithTag("Bullet_E");
        for(int i =0;i<obj.Length;i++)
        {
            obj[i].GetComponent<Bullet>().Despawn();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Bullet")
        {
            collision.gameObject.SetActive(false);
            collision.gameObject.transform.SetParent(gameManager.PoolManager.transform, false);
            HpBar.value -= 0.5f;
            gameManager.AddScore(10);
            isPhase = false;
        }
        
    }
    private IEnumerator PatternA()
    {
        float randomX = 0f;
        float randomY = 0f;
        int a = 0;
        oneShoting = 30;
        Vector2 dir = new Vector2(0, 0);
        yield return new WaitForSeconds(2f);
        while (a<3)
        {
            if (isPhase) break;
            randomX = Random.Range(-1.7f, 1.7f);
            randomY = Random.Range(1, 4f);
            GameObject bullet = null;
            CircleFire(bullet, 30, 0,bulletPosition);
            StartCoroutine(MoveTo(gameObject, new Vector3(randomX, randomY, 0)));
            for (int i = 0;i<15;i++)
            {
                bullet = Fire(bullet);
                dir = targetPosition.position - bullet.transform.position;
                bullet.GetComponent<Rigidbody2D>().AddForce(dir * speed);
                yield return new WaitForSeconds(0.3f);
            }
            a++;
            yield return new WaitForSeconds(0.5f);
        }
        StartCoroutine(PatternB());

    }
    private IEnumerator PatternB()
    {
        int one = 0;
        int a = 0;
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
        oneShoting = 40;
        while (a<40)
        {
            if (isPhase) break;
            if (one >360)
            {
                one = 10;
            }
            float angle = 360 / oneShoting;
            GameObject bullet = null;
            CircleFire(bullet, oneShoting, one, bulletPosition);
            
            one += 10;
            a++;
            yield return new WaitForSeconds(0.3f);
        }
        yield return new WaitForSeconds(1f);
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
        StartCoroutine(PatternC());
    }
    private IEnumerator PatternC()
    {
        int one = 0;
        int a = 0;
        oneShoting = 30;
        GameObject bullet = null;
        while (a<20)
        {
            if (isPhase) break;
            if (one > 360)
            {
                one = 20;
            }
            pos1.position = new Vector3(-1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1);
            pos1.position = new Vector3(1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1);
            yield return new WaitForSeconds(0.3f);
            one += 20;
            a++;
        }
        a = 0;
        oneShoting = 40;
        while (a < 10)
        {

            if (one > 360)
            {
                one = 5;
            }
            pos1.position = new Vector3(-1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1);
            pos1.position = new Vector3(1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1);
            yield return new WaitForSeconds(0.3f);
            one += 5;
            a++;
        }

    }
    private IEnumerator PternD()
    {
        GameObject bullet = null;
        Vector2 dir = new Vector2(0, 0);
        while (true)
        {


            float x = Mathf.Cos(Time.time * moveSpeed) * moveArea;
            float y = Mathf.Sin(Time.time * moveSpeed) * moveArea;
            bullet = Fire(bullet);
            Debug.Log(x); Debug.Log(y);
            bullet.transform.position = new Vector3(transform.position.x + x, transform.position.y + y, transform.position.z);
            dir = targetPosition.position - bullet.transform.position;
            bullet.GetComponent<Rigidbody2D>().AddForce(dir * speed);
            yield return new WaitForSeconds(0.1f);
        }
    }
    private void CircleFire(GameObject bullet,float oneShoting,int one,Transform bulletPosition)
    {
        for (int i = 0; i < oneShoting; i++)
        {
            bullet = Fire(bullet);
            bullet.transform.position = bulletPosition.position;
            bullet.GetComponent<Rigidbody2D>().AddForce(new Vector2(speed * Mathf.Cos(Mathf.PI * 2 * i / oneShoting + one), speed * Mathf.Sin(Mathf.PI * i * 2 / oneShoting + one)));
            bullet.transform.Rotate(new Vector3(0f, 0f, 360 * i / oneShoting - 90));
        }
    }
    private GameObject Fire(GameObject bullet)
    {
        if (gameManager.PoolManager.transform.childCount > 0)
        {
            bullet = gameManager.PoolManager.transform.GetChild(0).gameObject;
            bullet.transform.position = bulletPosition.position;
            bullet.transform.SetParent(null);
            Bullet bm = bullet.GetComponent<Bullet>();
            bm.SetSprite(0);
            bullet.SetActive(true);

        }
        else
        {
            bullet = Instantiate(bulletPrefab, bulletPosition.position, Quaternion.identity);
        }
        if (bullet != null)
        {
            bullet.transform.SetParent(null);
        }
        return bullet;
    }
    private IEnumerator MoveTo(GameObject a, Vector3 toPos)
    {
        float count = 0.4f;
        Vector3 wasPos = a.transform.position;
        while (true)
        {

            count += Time.deltaTime;
            a.transform.position = Vector3.Lerp(wasPos, toPos, count);

            if (count >= 1)
            {
                a.transform.position = toPos;
                break;
            }
            yield return null;
        }
    }
    
}
