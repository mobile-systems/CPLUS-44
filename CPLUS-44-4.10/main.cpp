// 4.10.Домашнее задание
#include <iostream>
#include"calculate.h"
using namespace std;

int main()
{
    int x, y;
    char op;

    setlocale(LC_ALL, "");
    cout << "Укажите пожалуйста какую операцию хотите произвести (+ - * / ! ^): ";
    cin >> op;

    if (op != '!')
    {
        cout << "Введите пожалуйста два числа: ";
        cin >> x >> y;
    }
    else
    {
        cout << "Введите пожалуйста число: ";
        cin >> x;
    }

    switch (op)
    {
    case '+':
        cout << x << " + " << y << " = " << Sum(x, y) << endl;
        break;
    case '-':
        cout << x << " - " << y << " = " << Minus(x, y) << endl;
        break;
    case '*':
        cout << x << " * " << y << " = " << Mul(x, y) << endl;
        break;
    case '/':
        if (!y)
        {
            cout << "Попытка деления на 0!" << endl;
            break;
        }

        cout << x << " / " << y << " = " << Div(x, y) << endl;
        break;
    case '^':
        cout << x << " ^ " << y << " = " << Power(x, y) << endl;
        break;
    case '!':
        cout << x << "! = " << Factorial(x) << endl;
        break;
    default:
        cout << "Не предусмотренная операция!" << endl;
        break;
    }

    return 0;
}
