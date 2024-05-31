/*  Задание 7.3.2
    Взгляните на код ниже, запишите через пробел какие объекты и 
    в каком порядке будут уничтожены при генерации исключения:
*/
#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "Class A Constructed" << endl; }
    ~A() { cout << "Class A Destructed" << endl; }
};
class B
{
public:
    B() { cout << "Class B Constructed" << endl; }
    ~B() { cout << "Class B Destructed" << endl; }
};
class C
{
public:
    C() { cout << "Class C Constructed" << endl; }
    ~C() { cout << "Class C Destructed" << endl; }
};
class D
{
public:
    D() { cout << "Class D Constructed" << endl; }
    ~D() { cout << "Class D Destructed" << endl; }
};

void Foo()
{
    A a;
    throw "exception";
}

void Bar()
{
    B b;
    Foo();
}

void Fuzz()
{
    D d;
    Bar();
}

int main()
{
    C c;
    try
    {
        Fuzz();
    }
    catch (const char* e)
    {
        cout << e << endl;
    }

    return 0;
}
