using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine.UIElements;


public class UIController : MonoBehaviour
{
    private VisualElement ui;               //  ������ ������ ����������
    private Button _upgradeButton;          //  ������ ��������
    private Button _moneyButton;            //  ������ ������
    private Label _moneyLabel;              //  ������� �����
    private Label _levelLabel;              //  ������� ������
    private MoneyPhysics _money;            //  ��������� ������ �����
    private PlayerData _player;             //  ��������� � �����������

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

     private void OnCoinButtonClicked() // ������� �� ������� ������
		{
        _money.ThrowMoney();
        _player.AddMoney();
        _moneyLabel.text = _player.money.ToString();
        if (!_upgradeButton.enabledSelf && _player.upgradeCost <= _player.money)
				{
            _upgradeButton.SetEnabled(true);
        }

    }
    private void OnUpgradeButtonClicked()   // ������� �� ������� ��������
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
