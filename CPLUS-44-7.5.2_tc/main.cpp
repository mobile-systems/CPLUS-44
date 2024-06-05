#include <iostream>
using namespace std;
class Base
{
public:
    Base() {}
    virtual void Show() { cout << "Base Exception" << endl; }
};
 
class Derived: public Base
{
public:
    Derived() {}
    virtual void Show() override { cout << "Derived Exception" << endl; }
};
 
int main()
{
    try
    {
        try
        {
            throw Derived(); // генерация исключения класса наследника Derived
        }
        catch (Base& b)
        {
            cout << "Caught exception by Base& b which is: ";
            b.Show();
            throw b; // потеря информации - b копируется как базовый класс base
        }
    }
    catch (Base& b)
    {
        cout << "Caught exception by Base& b which is: ";
        b.Show(); // исключение уже базового класса Base
    }
 
    return 0;
}