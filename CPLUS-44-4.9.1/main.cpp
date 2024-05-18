#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
    //return sum 1+ 2+ 3+ ...+ n
}

int main()
{
    int n = 10;

    cout << sum(n) << endl; // Рассчёт факториала

    return 0;
}
