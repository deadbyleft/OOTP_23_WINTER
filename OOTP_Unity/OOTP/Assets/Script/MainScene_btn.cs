using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainScene_btn : MonoBehaviour
{
    public List<GameObject> Table_list;
    public List<GameObject> Screen_list;

    private void Start()
    {
        Screen_list[0].SetActive(true);
        Screen_list[1].SetActive(false);
        Screen_list[2].SetActive(false);
        Screen_list[3].SetActive(false);
        Table_list[0].SetActive(true);
        Table_list[1].SetActive(false);
        Table_list[2].SetActive(false);
        Table_list[3].SetActive(false);
    }

    // Main_Screen 화면 버튼
    public void manage_btn()
    {
        Table_list[0].SetActive(true);
        Table_list[1].SetActive(false);
        Table_list[2].SetActive(false);
        Table_list[3].SetActive(false);
    }

    public void Record_btn() 
    {
        Table_list[0].SetActive(false);
        Table_list[1].SetActive(true);
        Table_list[2].SetActive(false);
        Table_list[3].SetActive(false);
    }

    public void Recruitment_btn()
    {
        Table_list[0].SetActive(false);
        Table_list[1].SetActive(false);
        Table_list[2].SetActive(true);
        Table_list[3].SetActive(false);
    }

    public void Team_Change_btn()
    {
        Table_list[0].SetActive(false);
        Table_list[1].SetActive(false);
        Table_list[2].SetActive(false);
        Table_list[3].SetActive(true);
    }

    public void Game_Select_btn()
    {
        Screen_list[0].SetActive(false);
        Screen_list[1].SetActive(true);
        Screen_list[2].SetActive(false);
        Screen_list[3].SetActive(false);
    }

    public void Setting_btn()
    {
        Screen_list[0].SetActive(false);
        Screen_list[1].SetActive(false);
        Screen_list[2].SetActive(true);
        Screen_list[3].SetActive(false);
    }

    public void EndGame_btn() { }
    
    // Setting 화면 버튼
    public void Back_Main_Screen_btn()
    {
        Screen_list[0].SetActive(true);
        Screen_list[1].SetActive(false);
        Screen_list[2].SetActive(false);
        Screen_list[3].SetActive(false);
    }

    // Game_Select 화면 버튼
    public void One_round_btn()
    {
        SceneManager.LoadScene("One_round_Scene");
    }
    public void League_btn()
    {
        SceneManager.LoadScene("League_Scene");
    }

    public void Event_Game_btn()
    {
        SceneManager.LoadScene("Event_gameScene");
    }

    // 공용
    public void Lording()
    {
        Table_list[0].SetActive(false);
        Table_list[1].SetActive(false);
        Table_list[2].SetActive(false);
        Table_list[3].SetActive(true);
    }
}
