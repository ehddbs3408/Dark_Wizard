using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{ 
    private SpriteRenderer spriteRenderer = null;
    private GameManager gameManager = null;
    private Collider2D col = null;
    private Animator ani = null;

    [SerializeField]
    private Sprite[] sprites = null;
    [SerializeField]
    protected float speed = 0.5f;
    
    // Start is called before the first frame update
    private void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        col = GetComponent<Collider2D>();
        ani = GetComponent<Animator>();
    }
    void Update()
    {
        transform.Translate(Vector2.up * speed * Time.deltaTime);
        CheckLimit();
    }
    protected virtual void CheckLimit()
    {
        if (transform.position.y > gameManager.MaxPosition.y + 2f)
        {
            Despawn();
        }
        if (transform.position.y < gameManager.MinPosition.y - 2f)
        {
            Despawn();
        }
        if (transform.position.x > gameManager.MaxPosition.x + 2f)
        {
            Despawn();
        }
        if (transform.position.x < gameManager.MinPosition.x - 2f)
        {
            Despawn();
        }
        
    }
    public IEnumerator Srali()
    {
        ani.Play("Destoy");
        yield return new WaitForSeconds(0.54f);
        Despawn();
    }
    protected virtual void Despawn()
    {
        gameObject.SetActive(false);
        transform.SetParent(gameManager.PoolManager.transform, false);
    }
    public void SetSprite(int cat)
    {
        spriteRenderer.sprite = sprites[cat];
        col.enabled = true;
        if (cat == 1)
        {
            gameObject.tag = "Bullet";
            transform.eulerAngles = new Vector3(transform.rotation.x, transform.rotation.y, 0f);
            speed = 20f;
            gameObject.layer = 6;
        }
        else
        {
            transform.eulerAngles = new Vector3(transform.rotation.x, transform.rotation.y, 0f);
            if(cat==4)
            {
                gameObject.tag = "Bullet_E_1";
            }
            else
            {
                gameObject.tag = "Bullet_E";
            }
            gameObject.layer = 7;
            speed = 0;
        }
    }
}
