#include <iostream>
using namespace std;

int main()
{
    int x, y;
    float fx;

    setlocale(LC_ALL, "");
    cout << "������� ���������� ��� �����: ";
    cin >> x >> y;
    
    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    fx = x;
    cout << x << " / " << y << " = " << fx / y << endl;
    cout << x << " & " << y << " = " << (x & y) << endl;
    cout << x << " | " << y << " = " << (x | y) << endl;
    cout << x << " ^ " << y << " = " << (x ^ y) << endl;

    return 0;
}
