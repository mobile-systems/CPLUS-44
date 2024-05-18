/*
	Задание 4.9.2
	Напишите функцию processArray, которая проходит в цикле по всем элементам массива и на каждой итерации вызывает функцию callback, 
	которая принимает на вход текущий элемент массива : void processArray(int* arr, int size, void (*callback)(int));
	Также напишите две функции callback, одна из которых выводит на консоль текущий элемент массива : void showElement(int e), 
	другая — модуль элемента массива : void showElementMod(int e).
*/
#include <iostream>
using namespace std;

void showElement(int e)
{
    cout << e << " ";
}

void showElementMod(int e)
{
    if (e >= 0)
        cout << e << " ";
    else
        cout << (-e) << " ";
}

void processArray(int* arr, int size, void (*callback)(int))
{
    for (int i = 0; i < size; i++)
    {
        (*callback)(arr[i]);
    }
}

int main()
{
    // Массив для задания :
    int arr[10] = { 0, 1, -6, 87, -4, -7, 9, 11, -34, 2 };

    bool showType = false;
    cout << "Show type:";
    cin >> showType;
    void (*outType)(int) = showType ? showElement : showElementMod;
    processArray(arr, 10, outType);
    
    return 0;
}