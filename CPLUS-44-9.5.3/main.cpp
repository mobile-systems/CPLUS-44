#include <iostream>
using namespace std;

class bad_range final : public exception {
public:
    virtual const char* what() const noexcept override { return "Index out of range!"; }
};

class bad_length final : public exception {
public:
    virtual const char* what() const noexcept override { return "Lenght error!"; }
};

template <class T>
class DynamicArray
{
    T* _array;
    int _length;
public:
    DynamicArray(int lenght)
    {
        if (lenght <= 0)
            throw bad_length();

        if (lenght > 0) {
            _array = new T[lenght] {};
            _length = lenght;
        }

        cout << "Int new class:\t" << _length << endl;
    }

    DynamicArray(const DynamicArray &other)
    {
        _length = other._length;
        delete[] _array;
        _array = new T[_length];
        for (int i = 0; i < _length; ++i)
        {
            _array[i] = other._array[i];
        }
    }
    DynamicArray& operator=(const DynamicArray &other)
    {
        _length = other._length;
        delete[] _array;
        _array = new T[_length];
        for (int i = 0; i < _length; ++i)
        {
            _array[i] = other._array[i];
        }

        return *this;
    }

    T& operator[](const int index)
    {
        if (index >= 0 && index < _length) {}
        else
        {
            // "Index out of range";
            throw bad_range();
        }
        return _array[index];
    }

    ~DynamicArray()
    {
        delete[] _array;
    }
    T getLength() {
        return _length;
    }
};


int main()
{
    {
        int len = 50;
        DynamicArray <int>i(len);
        for (int x=0;x<len;x++){
            i[x] = x;
            cout << " x: " << x;
            cout << " i: " << i[x] ;
        }
        cout << endl;
        //DynamicArray <long>j;
        cout << "Sizeof class: " << sizeof(i) << endl;
        cout << "State class i: " << i[0] << endl;
        cout << "State class i: " << i[20] << endl;
        cout << "State class i: " << i[21] << endl;
        //i[22]=22;i[23]=23;
        cout << "State class i: " << i[22] << endl;
        //cout << "Sizeof class: " << sizeof(j) << endl;
        //cout << "State class j: " << j[21] << endl;
    }


    return 0;
}