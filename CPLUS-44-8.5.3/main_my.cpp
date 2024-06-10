// 8.4.Шаблонные классы 
// Пример объявления и использования шаблонного класса:

#include <iostream>
using namespace std;

//Шаблонный класс:
template <typename X, typename Y> class MyPair {
    X value;
    Y value2;
public:
    MyPair(X m, Y n) {
        value = m;
        value2 = n;
    }
    void set(X m, Y n) { value = m; value2 = n; }
    void get() {
        cout << "Значение = " << value << " " << value2 << endl;
    }
    X Max(X x, Y y) {
        X z;
        //cout << "Первый аргумент: " << x << endl;
        //cout << "Второй аргумент: " << y << endl;
        if (x > y) {
            z = x;
        }
        else {
            z = y;
        }

        cout << (z) << endl;
        return (z);
    }
};
//Явная специализация шаблонного класса:
//template <> class MyClass<int> {
//public:
//    int value;
//    MyClass() {
//        value = 5;
//    }
//};

int main() {

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    //Создание объекта с int-полем:
    //MyClass<int> a;
    //cout << "Значение = " << a.value << endl;
    //a.value = 3;
    //cout << "Значение = " << a.value << endl;
    //Создание объекта с char-полем:
    MyPair<float, int> b('x', 1);
    b.get();
    b.set('z', 2);
    b.get();
    cout << b.Max(2, 6) << endl;
    return 0;
}