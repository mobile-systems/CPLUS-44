// Задание 4.6.2 Напишите функцию countOdd, которая принимает на вход массив и возвращает количество четных элементов массива.
#include <iostream>
using namespace std;

int countOdd(int* arr, int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            result++;
    }

    return result;
}

int main()
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    int arrayTest[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int itogo = countOdd(&arrayTest[0], 10);


    cout << "Результат: " << itogo << endl;

    // Ссылки
    //int a = 5;
    //int& ref = a;
    //cout << ref << endl; // ref = 6
    //a = 6;
    //cout << ref << endl; // ref = 6

    //cout << &ref << endl;
    //cout << &a << endl;


    return 0;
}