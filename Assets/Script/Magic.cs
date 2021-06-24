using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Magic : MonoBehaviour
{
    private SpriteRenderer spriteRenderer = null;
    private Collider2D col = null;
    [SerializeField]
    private float speed = 0.5f;
    [SerializeField]
    private int magicNumber = 0;
    [SerializeField]
    private Sprite[] sprites = null;

    // Start is called before the first frame update
    private void Awake()
    {
        col = GetComponent<Collider2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        if (magicNumber == 1)
        {
            spriteRenderer.enabled = false;
            col.enabled = false;
        }
    }
    void Start()
    {
        


        
    }

    // Update is called once per frame
    void Update()
    {
        if(magicNumber==0)
        {
            Rotate();
        }
    }
    private void Rotate()
    {
        transform.Rotate(new Vector3(transform.rotation.x, transform.rotation.y, speed * Time.deltaTime));
    }
    public void Changesprite(int cat)
    {
        spriteRenderer.sprite = sprites[cat];
        
    }
}
