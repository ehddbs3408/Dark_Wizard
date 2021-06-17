using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField]
    private Transform bulletPosition = null;
    [SerializeField]
    private GameObject bulletPrefab = null;
    private Vector3 targetPosition = Vector3.zero;
    private GameManager gameManager = null;
    private SpriteRenderer spriteRenderer;

    
    [SerializeField]
    private float speed = 0.5f;
    [SerializeField]
    private float firelate = 0.5f;

    private bool isDead = false;
    

    // Start is called before the first frame update
    void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        gameManager = FindObjectOfType<GameManager>();
        StartCoroutine(Fire());
    }

    // Update is called once per frame
    void Update()
    {
        Move();
    }

    private void Move()
    {
        if (Input.GetMouseButton(0))
        {
            targetPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            targetPosition.x = Mathf.Clamp(targetPosition.x, gameManager.MinPosition.x, gameManager.MaxPosition.x);
            targetPosition.y = Mathf.Clamp(targetPosition.y, gameManager.MinPosition.y, gameManager.MaxPosition.y);
            transform.localPosition = Vector2.MoveTowards(transform.localPosition, targetPosition, speed * Time.deltaTime);

        }
    }
    private IEnumerator Fire()
    {
        while(true)
        {
            InstantiateOnPool();
            yield return new WaitForSeconds(firelate);
        }
    }
    private void InstantiateOnPool()
    {
        GameObject result = null;

        if (gameManager.PoolManager.transform.childCount > 0)
        {
            result = gameManager.PoolManager.transform.GetChild(0).gameObject;
            result.transform.position = bulletPosition.position;
            result.transform.SetParent(null);
            Bullet bm = result.GetComponent<Bullet>();
            bm.SetSprite(1);

            result.SetActive(true);
        }
        else
        {
            result = Instantiate(bulletPrefab, bulletPosition);
        }
        if (result != null)
        {
            result.transform.SetParent(null);
        }


    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isDead) return;
        gameManager.Dead();
        isDead = true;
        StartCoroutine(Dead());
    }
    private IEnumerator Dead()
    {
        
        for(int i =0;i<5;i++)
        {
            spriteRenderer.color = new Color(1, 0, 0, 1);
            yield return new WaitForSeconds(0.2f);
            spriteRenderer.color = new Color(1, 1, 1, 1);
            yield return new WaitForSeconds(0.2f);
        }
        isDead = false;
    }
}
