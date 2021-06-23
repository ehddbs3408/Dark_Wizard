using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    // Start is called before the first frame update
    public Vector2 MaxPosition { get; private set; }
    public Vector2 MinPosition { get; private set; }
    public PoolManager PoolManager { get; private set; }
    [SerializeField]
    private Text textScore = null;
    private int score = 0;
    private int life = 3;
    private SpriteRenderer spriteRenderer = null;
    [SerializeField]
    private Image[] playerHp = null;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        PoolManager = FindObjectOfType<PoolManager>();
        MaxPosition = new Vector2(2.5f, 4.5f);
        MinPosition = new Vector2(-2.5f, -5f);
    }
    public void Dead()
    {
        life--;
        if(life < 0)
        {
            SceneManager.LoadScene("GameOver");
            return;
        }
        playerHp[life].color = new Color(1, 1, 1, 0);
    }
    protected virtual void AddScore(int addsocre)
    {
        score += addsocre;
        textScore.text = string.Format("Score\n{0}", score);
    }
}
