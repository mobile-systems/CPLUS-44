#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 5;

    cout << fact(n) << endl; // Рассчёт факториала

    // Рассчёт чисел Фибоначчи
    for (int i = 0; i < 20; ++i) {
        cout << fib(i) << " ";
    }


    return 0;
}