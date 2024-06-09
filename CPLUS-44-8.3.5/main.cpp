/*
    Задание 8.3.5
    Напишите программу, которая реализует шаблонную функцию Max, возвращающую максимальное значение
    переданных в функцию аргументов. Число аргументов должно быть равно двум или трем. Выведите 
    на экран результаты работы вызова функции для различных типов аргументов — int, float, string.
*/
#include<iostream>
using namespace std;

// Шаблонная функция
// Поиск максимального значение. Z - Возвращаемое значение, X и Y аргументы для сравнения
template <typename Z, typename X, typename Y> Z Max(X x, Y y) {
    Z z;
    //cout << "Первый аргумент: " << x << endl;
    //cout << "Второй аргумент: " << y << endl;
    if (x > y) {
        z = x;
    }
    else {
        z = y;
    }

    return (z);
}

// Специализация шаблонной функции для типа <string>
// Входные данные и результат типа string
template <> string Max(string x, string y) {
   //cout << "Первый аргумент: " << x << endl;
   //cout << "Второй аргумент: " << y << endl;
   //cout << "Сумма чисел равна: " << x + y << endl;
   //cout << "Размер x: " << x.size() << "\n";
   //cout << "Размер y: " << y.size() << "\n";
   if(x.size()>y.size()) 
       return x;
   else
       return y;
}

// Шаблонная функция для 3 аргументов
// Поиск максимального значение. Z - Возвращаемое значение, A, B, C аргументы для сравнения
// template <typename Z, typename A, typename B, typename C> Z Max(A a, B b, C c) {
//     Z z;
//     //cout << "Первый аргумент: " << x << endl;
//     //cout << "Второй аргумент: " << y << endl;
//     // if (a > b) {
//     //     z = a;
//     // }
//     // else {
//     //     z = b;
//     // }
//     z = Max(c, (Max(a, b) ) );
//     return (z);
// }

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");  
    // Вызовы шаблонной функции
    cout << "Вывод результата сравнения: " << Max<float, int>(2.5, 5.7) << endl;
    cout << "Вывод результата сравнения: " << Max<int, int>(5, 2) << endl;
    
    cout << "Вывод результата сравнения: " << Max<string, string, string>("Peter", "Ivan") << endl;
    //cout << "Вывод результата сравнения: " << Max<int, int, int>(5, 2, 7) << endl;

    return 0;
}