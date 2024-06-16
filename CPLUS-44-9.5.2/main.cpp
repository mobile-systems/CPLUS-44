#include <iostream>
using namespace std;
class Int
{
public:
    int* pi;
    Int()
    {
        pi = new int(1);
        cout << "Int new class:\t" << pi << endl;
    }

    Int(const Int& other)
    {
        pi = new int(*other.pi); //выделяем память под свой экземпляр переменной и копируем туда значение, которое содержится в переменной other
        cout << "Int copy class:\t" << pi << endl;
    }

    Int& operator=(const Int& other)
    {
        pi = new int(*other.pi);//выделяем память под свой экземпляр переменной и копируем туда значение, которое содержится в переменной other
        cout << "Int equa class:\t" << pi << endl;
    }

    ~Int()
    {
        delete pi;
    }
};


int main()
{
    {
        Int i;
        Int j = i;
        cout << "Sizeof class: " << sizeof(Int) << endl;
    }


    return 0;
}