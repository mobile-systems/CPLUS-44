#include <iostream>
using namespace std;

//Базовый шаблонный класс:
template<typename X> class First {
public:
    X a;
    First(X arg)     {
        a = arg;
    }
};
//Производный шаблонный класс:
template<typename X, typename Y> class Second :public First<X> {
public:
    Y b;
    void show()     {
        cout << "a = " << this->a << endl;
        cout << "b = " << this->b << endl;
    }
    Second(X arg1, Y arg2) : First<X>(arg1)     {
        b = arg2;
    }
};
int main() {
    Second<int, char> obj(5, 'z');
    obj.show();
    return 0;
}