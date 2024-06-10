#include<iostream>
using namespace std;

// Шаблонная функция
template <typename X, typename Y> void show(X x, Y y) {
    cout << "Первый аргумент: " << x << endl;
    cout << "Второй аргумент: " << y << endl;
}

// Специализация шаблонной функции для типов <int, int>
template <> void show(int x, int y) {
    cout << "Первый аргумент: " << x << endl;
    cout << "Второй аргумент: " << y << endl;
    cout << "Сумма чисел равна: " << x + y << endl;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    // Вызовы шаблонной функции
    show(1 , 'a');
    show("TEXT", 3.5);
    show(2, 5);

    return 0;
}