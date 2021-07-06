using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackingEnemy : MonoBehaviour
{
    private GameManager gameManager = null;
    private SpriteRenderer spriteRenderer;
    private Collider2D col;
    [SerializeField]
    private Sprite[] sprites = null;
    [SerializeField]
    private int hp = 15;
    int time = 1000;
    private bool isStop = false;
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        col = GetComponent<Collider2D>();
        spriteRenderer.enabled = false;
        col.enabled = false;
        StartCoroutine(MoveCount());
    }

    void Update()
    {
        if(isStop) return;
        Move();
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
    private void Move()
    {
        transform.Rotate(new Vector3(transform.rotation.x, transform.rotation.y, time * Time.deltaTime));
    }
    private IEnumerator MoveCount()
    {
        while(true)
        {

            if(time <= 0)
            {
                transform.SetParent(null);
                isStop = true;
                StartCoroutine(Attack());
                yield break;
            }
            yield return new WaitForSeconds(0.001f);
            time -= 2;
            Debug.Log(time);
        }
    }
    private IEnumerator Attack()
    {
        spriteRenderer.sprite = sprites[1];
        spriteRenderer.enabled = true;
        yield return new WaitForSeconds(0.2f);
        spriteRenderer.sprite = sprites[2];
        yield return new WaitForSeconds(0.2f);
        col.enabled = true;
        spriteRenderer.sprite = sprites[3];
    }
    private IEnumerator Damaged()
    {
        if (hp <= 0)
        {
            gameObject.SetActive(false);
        }
        spriteRenderer.color = new Color(0, 0, 0, 0);
        yield return new WaitForSeconds(0.1f);
        spriteRenderer.color = new Color(1, 1, 1, 1);
    }
}
