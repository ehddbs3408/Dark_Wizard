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

    protected SpriteRenderer spriteRenderer = null;

    [SerializeField]
    private Text textScore = null;
    private int highscore = 0;
    private int score = 0;
    private int life = 3;
    [SerializeField]
    private Image[] playerHp = null;

    private static GameManager instance = null;
    public static GameManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<GameManager>();
                if (instance == null)
                {
                    instance = new GameObject("GameManager").AddComponent<GameManager>();
                }
            }
            return instance;
        }
    }
    private void Awake()
    {
        PoolManager = FindObjectOfType<PoolManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();

        MaxPosition = new Vector2(2.5f, 4.5f);
        MinPosition = new Vector2(-2.5f, -5f);
        highscore = PlayerPrefs.GetInt("HIGHSCORE", 0);
    }
    public void Dead()
    {
        life--;
        if(life < 0)
        {
            SceneManager.LoadScene("GameOver");
            return;
        }
        AddScore(-1000);
        playerHp[life].color = new Color(1, 1, 1, 0);
    }
    protected virtual void AddScore(int addsocre)
    {
        score += addsocre;
        if(score<=0)
        {
            score = 0;
        }
        textScore.text = string.Format("Score\n{0}", score);
        UdateUI();
    }
    protected virtual void GameEnd()
    {
        SceneManager.LoadScene("GameEnd");
    }
    private void UdateUI()
    {
        PlayerPrefs.SetInt("SCORE",score);
        if (score > highscore)
        {
            highscore = score;
            PlayerPrefs.SetInt("HIGHSCORE", highscore);
        }
    }
}
