using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSwitcher : MonoBehaviour
{
    [Header("Scene Names")]
    public string beforeSceneName = "Scene_BeforeOptimization";
    public string afterSceneName = "Scene_AfterOptimization";

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            SceneManager.LoadScene(beforeSceneName);
        }

        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            SceneManager.LoadScene(afterSceneName);
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }
    }

    void OnGUI()
    {
        GUIStyle style = new GUIStyle();
        style.fontSize = 16;
        style.normal.textColor = Color.white;

        string text =
            "Controls:\n" +
            "WASD = Move\n" +
            "Mouse = Look Around\n" +
            "1 = Before Optimization\n" +
            "2 = After Optimization\n" +
            "R = Restart Performance Test\n" +
            "Esc = Unlock Cursor";

        GUI.Box(new Rect(Screen.width - 300, 10, 290, 145), "");
        GUI.Label(new Rect(Screen.width - 285, 22, 270, 130), text, style);
    }
}