using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Boss : GameManager
{
    
    [SerializeField]
    private GameObject bulletPrefab = null;
    [SerializeField]
    private GameObject EnemyPrefab = null;
    [SerializeField]
    private Transform targetPosition= null;
    [SerializeField]
    private Transform bulletPosition = null;
    [SerializeField]
    private Transform pos1 = null;
    private GameManager gameManager = null;
    [SerializeField]
    private Slider HpBar = null;

    [SerializeField]
    private float moveSpeed = 0.1f;
    [SerializeField]
    private float moveArea = 0.1f;
    [SerializeField]
    private float speed = 0.1f;
    [SerializeField]
    private float oneShoting = 0.5f;
    private bool isPhase = false;
    


    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();

        
        //StartCoroutine(TestPtern());
        //StartCoroutine(PatternA());
        //StartCoroutine(PatternB());
        //StartCoroutine(PatternC());
        StartCoroutine(PatternE());
    }
    void Update()
    {
        Phase_star();
    }
    protected override void AddScore(int addsocre)
    {
        base.AddScore(addsocre);
    }
    private void Phase_star()
    {
        
        if (HpBar.value <= 0)
        {
            Debug.Log("asd");
            isPhase = true;
            GameObject[] obj = GameObject.FindGameObjectsWithTag("Bullet_E");
            for (int i = 0; i < obj.Length; i++)
            {
                StartCoroutine(obj[i].GetComponent<Bullet>().Srali());
            }
            while (HpBar.value < 100)
            {
                HpBar.value += 0.1f;
            }
            StartCoroutine(PatternD());
        }
        if(isPhase)
        {
            Phase_2Move();
        }
    }
    private void Phase_2Move()
    {
        float x = Mathf.Cos(Time.time * 1) * 2;
        float y = Mathf.Sin(Time.time *2) * 1;
        transform.position = new Vector3(x, y + 2.5f, 0);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Bullet")
        {
            collision.gameObject.SetActive(false);
            collision.gameObject.transform.SetParent(gameManager.PoolManager.transform, false);
            HpBar.value -= 0.5f;
            AddScore(10);
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
            if (isPhase)
            {
                yield break;
            }
            randomX = Random.Range(-1.7f, 1.7f);
            randomY = Random.Range(1, 4f);
            GameObject bullet = null;
            CircleFire(bullet, 30, 0,bulletPosition,0);
            StartCoroutine(MoveTo(gameObject, new Vector3(randomX, randomY, 0)));
            for (int i = 0;i<15;i++)
            {
                bullet = Fire(bullet,0);
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
            if (isPhase)
            {
                yield break;
            }
            if (one >360)
            {
                one = 10;
            }
            float angle = 360 / oneShoting;
            GameObject bullet = null;
            CircleFire(bullet, oneShoting, one, bulletPosition,2);
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
            if (isPhase)
            {
                
                yield break;
            }
            if (one > 360)
            {
                one = 20;
            }
            pos1.position = new Vector3(-1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1,2);
            pos1.position = new Vector3(1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1,2);
            yield return new WaitForSeconds(0.3f);
            one += 20;
            a++;
        }
        a = 0;
        oneShoting = 40;
        while (a < 10)
        {
            if (isPhase)
            {

                yield break;
            }
            if (one > 360)
            {
                one = 5;
            }
            pos1.position = new Vector3(-1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1,2);
            pos1.position = new Vector3(1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1,2);
            yield return new WaitForSeconds(0.3f);
            one += 5;
            a++;
        }

    }
    private IEnumerator PatternD()
    {
        GameObject bullet = null;
        Vector2 dir = new Vector2(0, 0);

        yield return new WaitForSeconds(2f);
        while (true)
        {
            if (isPhase == false) continue; 
            float x = Mathf.Cos(Time.time * moveSpeed) * moveArea;
            float y = Mathf.Sin(Time.time * moveSpeed) * moveArea;
            bullet = Fire(bullet,0);
            bullet.transform.position = new Vector3(transform.position.x + x, transform.position.y + y, transform.position.z);
            dir = targetPosition.position - bullet.transform.position;
            bullet.GetComponent<Rigidbody2D>().AddForce(dir * speed);
            yield return new WaitForSeconds(0.1f);
        }
    }
    private IEnumerator PatternE()
    {
        isPhase = false;
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
        yield return new WaitForSeconds(1f);
        GameObject prefab = Instantiate(EnemyPrefab, bulletPosition);
        StartCoroutine(MoveTo(prefab, new Vector3(0f, 0f, 0f)));
    }
    private void CircleFire(GameObject bullet,float oneShoting,int one,Transform bulletPosition,int a)
    {
        for (int i = 0; i < oneShoting; i++)
        {
            bullet = Fire(bullet,a);
            bullet.transform.position = bulletPosition.position;
            bullet.GetComponent<Rigidbody2D>().AddForce(new Vector2(speed * Mathf.Cos(Mathf.PI * 2 * i / oneShoting + one), speed * Mathf.Sin(Mathf.PI * i * 2 / oneShoting + one)));
            bullet.transform.Rotate(new Vector3(0f, 0f, 360 * i / oneShoting - 90));
        }
    }
    private GameObject Fire(GameObject bullet,int a)
    {
        if (gameManager.PoolManager.transform.childCount > 0)
        {
            bullet = gameManager.PoolManager.transform.GetChild(0).gameObject;
            bullet.transform.position = bulletPosition.position;
            bullet.transform.SetParent(null);
            Bullet bm = bullet.GetComponent<Bullet>();
            bm.SetSprite(a);
            bullet.SetActive(true);

        }
        else
        {
            bullet = Instantiate(bulletPrefab, bulletPosition.position, Quaternion.identity);
            bullet.SetActive(false);
            Bullet bm = bullet.GetComponent<Bullet>();
            bm.SetSprite(a);
            bullet.SetActive(true);
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
