#include <iostream>
//#include <cstring>
using namespace std;

template <typename T>
class DynamicArray
{
private:
    T* _array;
    int _size;
public:
    DynamicArray(int size) : _array(new T[size]), _size(size)
    {
        cout << "DynamicArray constructed " << endl;
    }

    // конструктор копирования - запрещаем
    DynamicArray(const DynamicArray& other) = delete;
    // {
    //     cout << "string copy constructed " << other._array << endl;
    //     _array = new char[other._size];
    //     strcpy(_array, other._array);
    //     _size = other._size;
    // }
    // конструктор присваивания - запрещаем
    DynamicArray& operator=(const DynamicArray& other) = delete;
    // {
    //     cout << "string copy constructed " << other._array << endl;
    //     _array = new char[other._size];
    //     strcpy(_array, other._array);
    //     _size = other._size;

    //    return *this;
    // }
    
    DynamicArray(DynamicArray&& other) noexcept // конструктор копирования перемещения
    {
        cout << "Move constructor " << endl;
        _array = other._array;
        _size = other._size;
        other._array = nullptr;
        other._size = 0;
    }
    
    DynamicArray& operator=(DynamicArray&& other) noexcept // конструктор присваивания перемещения
    {
        if(&other == this)
            return *this;

        delete[] _array;

        cout << "move assignment constructor " << endl;
        _array = other._array;
        _size = other._size;
        other._array = nullptr;
        other._size = 0;
        
        return *this;
    }

    ~DynamicArray()
    {
        delete[] _array;
    }

    int getLength() const { return _size; }
    T& operator[](int index) { return _array[index]; }
    const T& operator[](int index) const { return _array[index]; }
    
    // friend ostream& operator<<(ostream& os, const DynamicArray& str);
};

// ostream& operator<<(ostream& os, const DynamicArray& str)
// {
//     os << str._array;
//     return os;
// }