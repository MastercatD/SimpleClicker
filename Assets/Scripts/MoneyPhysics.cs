using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine.UIElements;

public class MoneyPhysics : MonoBehaviour
{
    private VisualElement _ui;                                      //  Интерфейс
    [SerializeField] private VisualTreeAsset _moneyTemplate;        //  Визуальный элемент, эмитирующий купюру
    private List<Money> _moneyList = new List<Money>();             //  Список активных купюр
    private float _startMoneySpeed;                //  Начальная скорость купюр
    [SerializeField] private float _gravity;                        //  Ускорение купюр
    private class Money //Класс купюры                                                        
		{
        private VisualElement _view;
        public VisualElement view
				{
            get { return _view; }
				}
        private float _speedY;
        private float _speedX;
        private float _angularVelocity;
        public Money(VisualElement view, float speedX, float speedY, float angularVelocity)
				{
            _view = view;
            _speedX = speedX;
            _speedY = speedY;
            _angularVelocity = angularVelocity;
				}
        public bool NextPosition(float gravity) // Расчёт полёта купюры
				{
            this._view.transform.position += new Vector3(_speedX, _speedY, 0) * Time.deltaTime ;
            this._view.transform.rotation = Quaternion.Euler(new Vector3 (0, 0, _angularVelocity) * Time.deltaTime + this._view.transform.rotation.eulerAngles);
            _speedY += gravity;
            return true;
				}
    };
    void Start()
    {
        _startMoneySpeed = Screen.height / 1.5f;
        _ui = GetComponent<UIDocument>().rootVisualElement;
    }

    void Update()
    {
        for (int i = 0; i < _moneyList.Count; i++) 
				{
            _moneyList[i].NextPosition(_gravity);
            if (Screen.height / 2 < _moneyList[i].view.transform.position.y)
						{
                _ui.Q("MoneyArea").Remove(_moneyList[i].view);
                _moneyList.Remove(_moneyList[i]);
                i--;
            }
				}
    }
    public void ThrowMoney()    // Бросок купюры
		{
        TemplateContainer moneyContainer = _moneyTemplate.Instantiate();
        VisualElement moneyView = moneyContainer.ElementAt(0);
        Vector2 pos = new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y);
        pos = moneyView.WorldToLocal(pos);
        pos = RuntimePanelUtils.ScreenToPanel(_ui.panel, pos);
        moneyView.style.top = pos.y;
        moneyView.style.left = pos.x;
        float speed = Random.Range(-100.0f, 100.0f);
        float angularVelocity = Random.Range(-180.0f, 180.0f);
        _ui.Q("MoneyArea").Add(moneyView);
        _moneyList.Add(new Money(moneyView, speed, -_startMoneySpeed, angularVelocity));
    }
}
