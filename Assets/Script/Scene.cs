using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Scene : MonoBehaviour
{
    [SerializeField]
    private Text textHighScore = null;
    [SerializeField]
    private Text textScore = null;
    [SerializeField]
    private int sceneNumber = 1;
    private void Start()
    {
        if(sceneNumber == 1)
        {
            textScore.text = string.Format("SCORE\n{0}", PlayerPrefs.GetInt("SCORE", 0));
            textHighScore.text = string.Format("HIGHSCORE\n{0}", PlayerPrefs.GetInt("HIGHSCORE", 0)); 
        }
        
    }

    public void Started()
    {
        SceneManager.LoadScene("Main");
    }
    public void Exit()
    {
        Application.Quit();
    }
    
}
