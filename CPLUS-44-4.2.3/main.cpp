#include <iostream>
using namespace std;

float multiplyOrAdd(float a, float b, bool add = true)
{
    float result = 0;
    if (add)
    {
        result = a + b;
    }
    else
    {
        result = a * b;
    }
    return result;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    float result = multiplyOrAdd(3.14159, 255);
    cout << result << endl;

    return 0;
}