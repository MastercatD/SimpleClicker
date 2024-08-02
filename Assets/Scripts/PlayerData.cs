using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData : MonoBehaviour
{
    private int _money;                 //  Деньги
    public int money
		{
        get { return _money; }
		}

    private int _level;                 //  Уровень прокачки
    public int level
		{
        get { return _level; }
		}
    private int _upgradeCost;           //  Стоимость прокачки
    public int upgradeCost
		{
        get { return _upgradeCost; }
		}
    private int _income;                //  Прибыль с нажатия
    public int incone
		{
        get { return _income; }
		}

    void Start()
    {
        _money = 100000;
        _level = 1;
        _upgradeCost = 10;
        _income = 1;
    }

    public void AddMoney()  // Доход
		{
        _money += _income;
		}
    public void LevelUp()   // Прокачка
		{
        _level++;
        _money -= _upgradeCost;
        _upgradeCost = _upgradeCost * 2;
        _income += (_level / 10) * 10 + 1;
    }

}
