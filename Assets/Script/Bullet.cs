using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{ 
    private SpriteRenderer spriteRenderer = null;
    private GameManager gameManager = null;

    [SerializeField]
    private Sprite[] sprites = null;
    [SerializeField]
    private float speed = 0.5f;
    // Start is called before the first frame update
    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        gameManager = FindObjectOfType<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector2.up * speed * Time.deltaTime);
        CheckLimit();
    }
    private void CheckLimit()
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
    private void Despawn()
    {
        gameObject.SetActive(false);
        transform.SetParent(gameManager.PoolManager.transform, false);
    }
    public void SetSprite(int cat)
    {
        spriteRenderer.sprite = sprites[cat];
        if (cat == 1)
        {
            transform.eulerAngles = new Vector3(transform.rotation.x, transform.rotation.y, 0f);
            speed = 20f;
            gameObject.layer = 6;
        }

        else
        {
            gameObject.layer = 7;
            speed = 0;
        }

    }

}
