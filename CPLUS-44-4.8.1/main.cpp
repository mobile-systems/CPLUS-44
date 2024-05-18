#include <iostream>
using namespace std;

int Add(int x, int y)
{
    int sum = x + y;
    return sum;
}

float Add(float x, float y)
{
    float sum = x + y;
    return sum;
}

int main()
{
    int a = 9;
    int b = 54;

    float c = 5.6;
    float d = 9.6;

    cout << Add(a, b) << endl; // גûחמג int Add(int, int)

    cout << Add(c  , d) << endl; // גûחמג float Add(float, float)

    return 0;
}