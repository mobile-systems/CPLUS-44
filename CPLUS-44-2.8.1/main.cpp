#include <iostream>
using namespace std;

int main()
{
    /*
    //int sum = 0; // ����� ����� �� 1 �� 100.
    for (int i = 1; i <= 100; i=--i+2)
    {
        if (!(i%2))
            cout << i << endl;
    }

    int x = 10;
    while (x > 0)
    {
        cout << x << endl;
        x -= 2;
    }
    */
    int x = 10;
    for (int i = x; i > 0; --i)
    {
        cout << i << endl;
       // x -= 2;
    }

    return 0;
}