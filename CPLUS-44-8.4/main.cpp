// 8.4.Шаблонные классы 
// Пример объявления и использования шаблонного класса:

#include <iostream>
using namespace std;

//Шаблонный класс: Явная и неявная специализация шаблона класса
template <typename X = int> class MyClass {
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

int main() {

    setlocale(LC_ALL, "ru_RU.UTF-8");

    //Создание объекта с int-полем:
    MyClass<> a(5);
    a.get();
    a.set(3);
    a.get();
    //Создание объекта с char-полем:
    MyClass<char> b('x');
    b.get();
    b.set('z');
    b.get();
    return 0;
}