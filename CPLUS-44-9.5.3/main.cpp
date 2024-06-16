#include <iostream>
using namespace std;


template <class T>
class DynamicArray
{
    T* _array;
    int _length;
public:
    T* pi;
    DynamicArray()
    {
        pi = new T(1);
        cout << "Int new class:\t" << pi << endl;
    }

    DynamicArray(const DynamicArray& other)
    {
        pi = new T(*other.pi); //выделяем память под свой экземпляр переменной и копируем туда значение, которое содержится в переменной other
        cout << "Int copy class:\t" << pi << endl;
    }

    DynamicArray& operator=(const T& other)
    {
        pi = new T(*other.pi);//выделяем память под свой экземпляр переменной и копируем туда значение, которое содержится в переменной other
        cout << "Int equa class:\t" << pi << endl;
    }

    ~DynamicArray()
    {
        delete pi;
    }
};


int main()
{
    {
        DynamicArray <int>i;
        DynamicArray <long>j;
        cout << "Sizeof class: " << sizeof(i) << endl;
        cout << "Sizeof class: " << sizeof(j) << endl;
    }


    return 0;
}