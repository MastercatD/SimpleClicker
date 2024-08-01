using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine.UIElements;

public class UIController : MonoBehaviour
{
    private VisualElement ui;
    private Button upgrade;
    private Button coins;

    void Start()
    {
        ui = GetComponent<UIDocument>().rootVisualElement;
        upgrade = ui.Q<Button>("Upgrade");
        coins = ui.Q<Button>("Coins");

    }

    void Update()
    {
        if (Input.GetMouseButtonDown(1)) 
        upgrade.clickable.clicked += OnCoinButtonClicked;

    }
     private void OnCoinButtonClicked()
		{
        Debug.Log("click");
		}
}
