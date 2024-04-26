#include <iostream>
using namespace std;

int main()
{
    int x, y, power, factorial = 1, cnt = 1;
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
        cout << x << " + " << y << " = " << x + y << endl;
        break;
    case '-':
        cout << x << " - " << y << " = " << x - y << endl;
        break;
    case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        break;
    case '/':
        if (!y)
        {
            cout << "Попытка деления на 0!" << endl;
            break;
        }

        cout << x << " / " << y << " = " << x / y << endl;
        break;
    case '^':
        power = x;
        while (cnt++ < y)
        {
            power *= x;
        }
        cout << x << " ^ " << y << " = " << power << endl;
        break;
    case '!':
        while (cnt <= x)
        {
            factorial *= cnt++;
            //cnt++;
        }

        cout << (cnt - 1) << "! = " << factorial << endl;
        break;
    default:
        cout << "Не предусмотренная операция!" << endl;
        break;
    }

    return 0;
}
