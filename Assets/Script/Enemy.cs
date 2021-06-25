using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField]
    private GameObject bulletPrefab = null;
    [SerializeField]
    private Transform bulletPosition = null;
    private GameManager gameManager = null;
    private SpriteRenderer spriteRenderer = null;
    [SerializeField]
    private int hp = 100;
    [SerializeField]
    private float speed = 0.5f;
    // Start is called before the first frame update
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        StartCoroutine(Shotting());
        
    }
    void Update()
    {
        transform.Rotate(new Vector3(transform.rotation.x, transform.rotation.y, 53 * Time.deltaTime));
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Bullet")
        {
            collision.gameObject.SetActive(false);
            collision.gameObject.transform.SetParent(gameManager.PoolManager.transform, false);
            StartCoroutine(Damaged());
            hp--;
        }
    }
    private IEnumerator Shotting()
    {
        GameObject bullet = null;
        int oneShoting = 8;
        float one = 0;
        yield return new WaitForSeconds(2f);
        while (true)
        {
            
            if (one>360)
            {
                one = 0;
            }
            for (int i = 0; i < oneShoting; i++)
            {
                bullet = Fire(bullet, 3);
                bullet.transform.position = bulletPosition.position;
                bullet.GetComponent<Rigidbody2D>().AddForce(new Vector2(speed * Mathf.Cos(Mathf.PI * 2 * i / oneShoting + one), speed * Mathf.Sin(Mathf.PI * i * 2 / oneShoting + one)));
                bullet.transform.Rotate(new Vector3(0f, 0f, 360 * i / oneShoting - 90));
            }
            one+=0.1f;
            yield return new WaitForSeconds(0.08f);
        }
        
    }
    private GameObject Fire(GameObject bullet, int a)
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
    private IEnumerator Damaged()
    {
        if(hp <=0)
        {
            gameObject.SetActive(false);
        }
        spriteRenderer.color = new Color(0, 0, 0, 0);
        yield return new WaitForSeconds(0.1f);
        spriteRenderer.color = new Color(1, 1, 1, 1);
    }
}
