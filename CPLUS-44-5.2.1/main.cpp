#include <iostream>
using namespace std;

struct Human 
{
    const char* name;
    const char* lastname;
    short age;
    short weight;
    short height;
};

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
    Human m;
    int n = 10;

    m.name = "OOP";
    m.weight = 5;

    Human m2;
    m2 = { "Func", "", 18};


    cout << sum(m.weight) << endl; // Рассчёт факториала
    cout << sum(m2.age) << endl; // Рассчёт факториала
    cout << sizeof(const char*) << " " << sizeof(short) << " " << sizeof(int) << " " << sizeof(long) << endl;
    cout << sizeof(Human) << endl;

    Human *m4 = new Human;
    // код программы
    (*m4).age = 6;
    m4->height = 183;
    cout << sum((*m4).age) << endl; // Рассчёт факториала
    cout << m4->height << endl;
    delete m4; // освобождаем память, выделенную для m

    return 0;
}
