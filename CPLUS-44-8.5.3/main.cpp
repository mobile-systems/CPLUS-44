#include <iostream>
#include <string>
using namespace std;

template <typename T>
class MyPair {
    T _a, _b;
public:
    MyPair(T first, T second)
    {
        _a = first;
        _b = second;
    }
    T Max();
};

template <class T>
T MyPair<T>::Max()
{
    T retval;
    retval = _a > _b ? _a : _b;
    return retval;
}

int main() {
    MyPair <int> myobject1(100, 75);
    cout << myobject1.Max() << endl;

    MyPair <string> myobject2("Red", "Green");
    cout << myobject2.Max() << endl;

    return 0;
}