// 4.10.�������� �������
#include <iostream>
#include"calculate.h"
using namespace std;

int main()
{
    int x, y;
    char op;

    setlocale(LC_ALL, "");
    cout << "������� ���������� ����� �������� ������ ���������� (+ - * / ! ^): ";
    cin >> op;

    if (op != '!')
    {
        cout << "������� ���������� ��� �����: ";
        cin >> x >> y;
    }
    else
    {
        cout << "������� ���������� �����: ";
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
            cout << "������� ������� �� 0!" << endl;
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
        cout << "�� ��������������� ��������!" << endl;
        break;
    }

    return 0;
}
