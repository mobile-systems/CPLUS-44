#include"calculate.h"

int Sum(int x, int y)
{
    return (x + y);
}

int Minus(int x, int y)
{
    return (x - y);
}

int Mul(int x, int y)
{
    return (x * y);
}

int Div(int x, int y)
{
    return (x / y);
}

int Factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else {
        return x * Factorial(x - 1);
    }
}

int Power(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else {
        return x * Power(x, y - 1);
    }
}
