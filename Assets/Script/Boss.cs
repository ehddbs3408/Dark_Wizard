using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Boss : GameManager
{
    
    private Animator ani = null;
    private GameManager gameManager = null;
    [SerializeField]
    private GameObject bulletPrefab = null;
    [SerializeField]
    private GameObject[] enemyPrefab = null;
    [SerializeField]
    private GameObject laserObject = null;
    [SerializeField]
    private Transform targetPosition= null;
    [SerializeField]
    private Transform bulletPosition = null;
    [SerializeField]
    private Transform pos1 = null;
    [SerializeField]
    private Slider HpBar = null;
    [SerializeField]
    private float damaged = 0.5f;
    [SerializeField]
    private float moveSpeed = 0.1f;
    [SerializeField]
    private float moveArea = 0.1f;
    [SerializeField]
    private float speed = 0.1f;
    [SerializeField]
    private float oneShoting = 0.5f;
    private int isMove = 0;
    private bool isPhase = false;
    private bool isPhase2 = false;
    private int time = 0;
    [SerializeField]
    private float testspeed;

    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        ani = GetComponent<Animator>();

        StartCoroutine(PatternG());
        //StartCoroutine(AddTimeScore(0));
        //StartCoroutine(PatternA());
    }
    void Update()
    {
        //Phase_star();
        switch(isMove)
        {
            case 1:
                PatternDMove();
                break;
            case 2:
                PattermGMove();
                break;
            default:
                break;
        }
    }
    protected override void AddScore(int addsocre)
    {
        base.AddScore(addsocre);
    }
    protected override void GameEnd()
    {
        base.GameEnd();
    }
    private void Phase_star()
    {
        if (HpBar.value <= 0)
        {
            if (isPhase2==false&&isPhase==true)
            {
                isPhase2 = true;
                GameEnd();
            }
            speed = 100;
            isPhase = true;
            GameObject[] obj = GameObject.FindGameObjectsWithTag("Bullet_E");
            for (int i = 0; i < obj.Length; i++)
            {
                obj[i].GetComponent<Collider2D>().enabled = false;
                StartCoroutine(obj[i].GetComponent<Bullet>().Srali());
                AddScore(5);
            }
            while (HpBar.value < 100)
            {
                HpBar.value += 0.1f;
            }
            StartCoroutine(PatternD());
            StartCoroutine(AddTimeScore(1));
            damaged -= 0.25f;
        }
    }
    private void PatternDMove()
    {
        float x = Mathf.Cos(Time.time * 1) * 2;
        float y = Mathf.Sin(Time.time *2) * 1;
        transform.position = new Vector3(x, y + 2.5f, 0);
    }
    private void PattermGMove()
    {
        float x = Mathf.Cos(Time.time * 3) * 3.5f; //fMathf.Cos(speed) * Area
        float y = Mathf.Sin(Time.time * 3) * 3.5f;
        transform.position = new Vector3(x, y , 0);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Bullet")
        {
            collision.gameObject.SetActive(false);
            collision.gameObject.transform.SetParent(gameManager.PoolManager.transform, false);
            HpBar.value -= damaged;
            AddScore(10);
        }
        
    }
    private IEnumerator PatternMagic()
    {
        int a = 0;
        yield return new WaitForSeconds(1f);
        GameObject bullet = null;
        while(a<4)
        {
            bullet = Instantiate(enemyPrefab[1],targetPosition);
            yield return new WaitForSeconds(5f);
            a++;
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
            CircleFire(bullet, 30, 0,bulletPosition,0,speed);
            StartCoroutine(MoveTo(gameObject, new Vector3(randomX, randomY, 0)));
            for (int i = 0;i<15;i++)
            {
                
                bullet = Fire(bullet,0);
                dir = targetPosition.position - bullet.transform.position;
                bullet.GetComponent<Rigidbody2D>().AddForce(dir * 70);
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
        speed = 200;
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
        oneShoting = 40;
        while (a<30)
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
            CircleFire(bullet, oneShoting, one, bulletPosition,2,speed);
            one += 10;
            a++;
            yield return new WaitForSeconds(0.25f);
        }
        yield return new WaitForSeconds(1f);
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
        StartCoroutine(PatternC());
    }
    private IEnumerator PatternC()
    {
        int one = 0;
        int a = 0;
        oneShoting = 25;
        GameObject bullet = null;
        speed = 100;
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
            CircleFire(bullet, oneShoting, one, pos1,2,speed);
            pos1.position = new Vector3(1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1,2,speed);
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
            CircleFire(bullet, oneShoting, one, pos1,2,speed);
            pos1.position = new Vector3(1.5f, 3.7f, 0);
            CircleFire(bullet, oneShoting, one, pos1,2,speed);
            yield return new WaitForSeconds(0.3f);
            one += 5;
            a++;
        }
        yield return new WaitForSeconds(3f);
        StartCoroutine(PatternA());
    }
    private IEnumerator PatternD()
    {
        GameObject bullet = null;
        float x, y;
        Vector2 dir = new Vector2(0, 0);
        int a = 0;
        isMove = 1;
        yield return new WaitForSeconds(2f);
        while (a <100)
        {
            if (isPhase == false) continue; 
            x = Mathf.Cos(Time.time * moveSpeed) * moveArea;
            y = Mathf.Sin(Time.time * moveSpeed) * moveArea;
            bullet = Fire(bullet,0);
            bullet.transform.position = new Vector3(transform.position.x + x, transform.position.y + y, transform.position.z);
            dir = targetPosition.position - bullet.transform.position;
            bullet.GetComponent<Rigidbody2D>().AddForce(dir * 65);
            yield return new WaitForSeconds(0.1f);
            a++;
        }
        StartCoroutine(PatternE());
        yield return new WaitForSeconds(20f);
        
    }
    private IEnumerator PatternE()
    {
        isMove = 0;
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 4.2f, 0)));
        yield return new WaitForSeconds(1f);
        GameObject prefab = Instantiate(enemyPrefab[0], bulletPosition);
        prefab.transform.SetParent(null);
        StartCoroutine(MoveTo(prefab, new Vector3(0f, 0f, 0f)));
        yield return new WaitForSeconds(10f);
        StartCoroutine(PatternF());
    }
    private IEnumerator PatternF()
    {
        int a = 0;
        int b = 0;
        float randomX = 0f;
        float randomY = 0f;
        
        GameObject bullet =null;
        while (a<4)
        {
            randomX = Random.Range(-1.3f, 1.3f);
            randomY = Random.Range(-2.5f, 2.5f);
            StartCoroutine(MoveTo(gameObject, new Vector3(randomX, randomY, 0)));
            laserObject.GetComponent<Collider2D>().enabled = false;
            laserObject.GetComponent<SpriteRenderer>().enabled = true;
            for (int i=0;i<3;i++)
            {
                laserObject.GetComponent<Magic>().Changesprite(1);
                yield return new WaitForSeconds(0.1f);
                laserObject.GetComponent<Magic>().Changesprite(0);
                yield return new WaitForSeconds(0.1f);
            }
            laserObject.GetComponent<Magic>().Changesprite(2);
            laserObject.GetComponent<Collider2D>().enabled = true;
            for (int i = 0;i<6;i++)
            {
                CircleFire(bullet, 30, b, bulletPosition, 0,130);
                b += 15;
                yield return new WaitForSeconds(0.3f);
            }
            
            yield return new WaitForSeconds(2f);
            a++;
        }
        laserObject.GetComponent<Collider2D>().enabled = false;
        laserObject.GetComponent<SpriteRenderer>().enabled = false;
        StartCoroutine(PatternG());
    }
    private IEnumerator PatternG()
    {
        GameObject bullet = null;
        int a = 0;
        float x, y;
        float randomX = 0f;
        float randomY = 0f;
        Vector3 dir = new Vector3(0, 0, 0);
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
        yield return new WaitForSeconds(1f);
        StartCoroutine(PatternMagic());
        while (a<15)
        {
            for (int i = 0; i < 20; i++)
            {
                x = Mathf.Cos(Time.time * 16) * 2f;
                y = Mathf.Sin(Time.time * 16) * 2f;
                bullet = Fire(bullet, 0);
                bullet.transform.position = new Vector3(transform.position.x + x, transform.position.y + y, transform.position.z);
                yield return new WaitForSeconds(0.02f);
            }
            yield return new WaitForSeconds(0.2f);
            GameObject[] obj = GameObject.FindGameObjectsWithTag("Bullet_E");
            for (int i = 0; i < obj.Length; i++)
            {
                dir = targetPosition.position - obj[i].transform.position;
                obj[i].GetComponent<Rigidbody2D>().AddForce(dir * 90);
                obj[i].gameObject.tag = "Bullet_E_1";
            }
            randomX = Random.Range(-1.7f, 1.7f);
            randomY = Random.Range(1, 4f);
            CircleFire(bullet, 30, 0, bulletPosition, 4, 80);
            StartCoroutine(MoveTo(gameObject, new Vector3(randomX, randomY, 0)));
            yield return new WaitForSeconds(0.7f);
            a++;
        }
        StartCoroutine(PatternH());
    }
    private IEnumerator PatternH()
    {
        
        GameObject bullet = null;
        Vector3 dir = new Vector3(0, 0,0);
        int a = 0;
        StartCoroutine(MoveTo(gameObject, new Vector3(0f, 3.7f, 0)));
        yield return new WaitForSeconds(3f);
        isMove = 2;
        yield return new WaitForSeconds(1f);
        while (a<20)
        {
            bullet = Fire(bullet, 0);
            CircleFire(bullet, 25, 0, bulletPosition, 2, 150);
            yield return new WaitForSeconds(0.5f);
            a++;
        }
        isMove = 0;
        transform.position = new Vector3(0, 3.7f, 0);
        yield return new WaitForSeconds(4f);
        GameObject[] obj = GameObject.FindGameObjectsWithTag("Bullet_E");
        for (int i = 0; i < obj.Length; i++)
        {
            dir = targetPosition.position - obj[i].transform.position;
            obj[i].GetComponent<Rigidbody2D>().AddForce(dir * 50);
        }
        yield return new WaitForSeconds(2f);
        StartCoroutine(PatternD());
    }
    private void CircleFire(GameObject bullet,float oneShoting,int one,Transform bulletPosition,int a,float addspeed)
    {
        for (int i = 0; i < oneShoting; i++)
        {
            bullet = Fire(bullet,a);
            bullet.transform.position = bulletPosition.position;
            bullet.GetComponent<Rigidbody2D>().AddForce(new Vector2(addspeed * Mathf.Cos(Mathf.PI * 2 * i / oneShoting + one), addspeed * Mathf.Sin(Mathf.PI * i * 2 / oneShoting + one)));
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
    private IEnumerator AddTimeScore(int a)
    {
        time = 0;
        while(true)
        {
            if(isPhase == true&&a==0)
            {
                if (time < 45)
                {
                    if (time < 40)
                    {
                        if (time < 35)
                        {
                            if (time < 30)
                            {
                                if (time < 25)
                                {

                                    AddScore(3000);
                                    yield break;
                                }
                                AddScore(2000);
                                yield break;
                            }
                            AddScore(1500);
                            yield break;
                        }
                        AddScore(1000);
                        yield break;
                    }
                    AddScore(500);
                    yield break;
                }
                yield break;
            }
            if(isPhase2==true&&a==1)
            {
                if (time < 140)
                {
                    if (time < 130)
                    {
                        if (time < 120)
                        {
                            if (time < 110)
                            {
                                if (time < 100)
                                {
                                    if (time < 95)
                                    {
                                        if (time < 90)
                                        {
                                            if (time < 85)
                                            {
                                                if (time < 80)
                                                {
                                                    if (time < 75)
                                                    {
                                                        AddScore(10000);
                                                        yield break;
                                                    }
                                                    AddScore(9000);
                                                    yield break;
                                                }
                                                AddScore(8000);
                                                yield break;
                                            }
                                            AddScore(7000);
                                            yield break;
                                        }
                                        AddScore(6000);
                                        yield break;
                                    }
                                    AddScore(5000);
                                    yield break;
                                }
                                AddScore(4000);
                                yield break;
                            }
                            AddScore(3000);
                            yield break;
                        }
                        AddScore(2000);
                        yield break;
                    }
                    AddScore(1000);
                    yield break;
                }
                yield break;
            }
            yield return new WaitForSeconds(1f);
            time++;
            Debug.Log(time);
        }
        
    }
}
