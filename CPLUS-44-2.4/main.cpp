#include <iostream>
using namespace std;

int main()
{
    int a = 11;
    int b = 10;

    if (a < b)
    {
        cout << "a < b" << endl;
    }
    else if (a > b)
    {
        cout << "a > b" << endl;
    }
    else
    {
        cout << "a == b" << endl;
    }

    /*int */ a = -5;
    int absoluteValue = a < 0 ? -a : a;
    cout << "a = " << a << " abs(a) = " << absoluteValue << endl;

    int x = 10;
    int y = 30;

    int z = (x < y) ? y : x;
    cout << z << endl;

    return 0;
}