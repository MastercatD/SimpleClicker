using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine.UIElements;


public class UIController : MonoBehaviour
{
    private VisualElement ui;               //  Корень дерева интерфейса
    private Button _upgradeButton;          //  Кнопка прокачки
    private Button _moneyButton;            //  Кнопка добычи
    private Label _moneyLabel;              //  Счётчик денег
    private Label _levelLabel;              //  Счётчик уровня
    private MoneyPhysics _money;            //  Компонент физики купюр
    private PlayerData _player;             //  Компонент с информацией

    void Start()
    {
        ui = GetComponent<UIDocument>().rootVisualElement;              
        _upgradeButton = ui.Q<Button>("Upgrade");
        _moneyButton = ui.Q<Button>("AddMoney");
        _upgradeButton.clickable.clicked += OnUpgradeButtonClicked;
        _moneyButton.clickable.clicked += OnCoinButtonClicked;
        _moneyLabel = ui.Q<Label>("Money");
        _levelLabel = ui.Q<Label>("Level");
        _money = GetComponent<MoneyPhysics>();
        _player = GetComponent<PlayerData>(); 

    }

     private void OnCoinButtonClicked() // Нажатие на клавишу добычи
		{
        _money.ThrowMoney();
        _player.AddMoney();
        _moneyLabel.text = _player.money.ToString();
        if (!_upgradeButton.enabledSelf && _player.upgradeCost <= _player.money)
				{
            _upgradeButton.SetEnabled(true);
        }

    }
    private void OnUpgradeButtonClicked()   // Нажатие на клавишу прокачки
    {
        _player.LevelUp();
        _levelLabel.text = "lvl: " + _player.level.ToString();
        _moneyLabel.text = _player.money.ToString();
        _moneyButton.text = _player.incone.ToString();
        _upgradeButton.text = "Upgrade " + _player.upgradeCost.ToString();
        if (_player.upgradeCost > _player.money)
				{
            _upgradeButton.SetEnabled(false);
        }
    }
}
