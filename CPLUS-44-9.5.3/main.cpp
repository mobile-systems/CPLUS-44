#include <iostream>
using namespace std;

template <class T>
class DynamicArray
{
    T* _array;
    int _length;
public:
    //T* pi;
    DynamicArray()
    {
        //pi = new T(1);
        _array = new T[1] {};
        _length = 1;
        cout << "Int new class:\t" << _length << endl;
    }
    DynamicArray(int lenght)
    {
        if (lenght <= 0)
            throw bad_array_new_length();

        if (lenght > 0) {
            _array = new T[lenght] {};
            _length = lenght;
        }

        cout << "Int new class:\t" << _lenght << endl;
    }

    DynamicArray(const DynamicArray& other)
    {
        _array = new T[_length](*other._array); //выделяем память под свой экземпляр переменной и копируем туда значение, которое содержится в переменной other
        cout << "Int copy class:\t" << pi << endl;
    }

    DynamicArray& operator=(const T& other)
    {
        pi = new T(*other.pi);//выделяем память под свой экземпляр переменной и копируем туда значение, которое содержится в переменной other
        cout << "Int equa class:\t" << pi << endl;
    }

    DynamicArray& operator[](const T& other)
    {
        pi = new T(*other.pi);//выделяем память под свой экземпляр переменной и копируем туда значение, которое содержится в переменной other
        
        cout << "Int equa class:\t" << pi << endl;
    }

    ~DynamicArray()
    {
        delete pi;
    }
    T getLength() {
        return _length;
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