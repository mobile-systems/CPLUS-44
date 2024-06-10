// 8.4.Шаблонные классы 
// Пример объявления и использования шаблонного класса:

#include <iostream>
using namespace std;

//Шаблонный класс:
template <typename X> class MyClass {
    X value;
public:
    MyClass(X m) {
        value = m;
    }
    void set(X m) { value = m; }
    void get() {
        cout << "Значение = " << value << endl;
    }
};
//Явная специализация шаблонного класса:
template <> class MyClass<int> {
public:
    int value;
    MyClass() {
        value = 5;
    }
};

int main() {

    setlocale(LC_ALL, "ru_RU.UTF-8");

    //Создание объекта с int-полем:
    //Создание объекта с int-полем:
    MyClass<int> a;
    cout << "Значение = " << a.value << endl;
    a.value = 3;
    cout << "Значение = " << a.value << endl;
    //Создание объекта с char-полем:
    MyClass<char> b('x');
    b.get();
    b.set('z');
    b.get();
    return 0;
}