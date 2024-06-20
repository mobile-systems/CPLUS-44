#include <iostream>
#include <exception>
#include <algorithm> // for std::copy_n
#include "DynamicArray.h"
using namespace std;

int main()
{
    try
    {
        DynamicArray <int>ir(10);
        DynamicArray <long> iq(110);

        for (int i{ 0 }; i < 10; ++i)
            ir[i] = i + 1;

        setlocale(LC_ALL, "ru_RU.UTF-8");
        
        // Проверяем значение присвоенных элементов
        cout << "Проверяем значение элемента: " << ir[4] << "\n";
        // Проверяем размер массива
        cout << "Проверяем размер массива: " << ir.getLength() << "\n";

        ir.resize(12);
        // Обращаемся к элементам по индексу
        ir[10] = 11;
        ir[11] = 12;
        // Проверяем значение присвоенных элементов
        cout << "Index #10: " << ir[9] << "\n";
        cout << "Index #11: " << ir[10] << "\n";
        cout << "Index #12: " << ir[11] << "\n";

        cout << "Вставляем новый элемент: " << ir[10] << "\n";
        ir.insertBefore(100, 10);
        cout << "Прверяем значение вставленного элемента: " << ir[10] << "\n";
        cout << "Размер контейнера после вставки: " << ir.getLength() << "\n\n";

        for (int j{ 0 }; j < 110; ++j)
            iq[j] = j + 1;
        // Проверяем значение присвоенных элементов
        cout << "Проверяем значение элемента: " << iq[101] << "\n";
        // Проверяем размер массива
        cout << "Проверяем размер массива: " << iq.getLength() << "\n";
        // Пытаемся удалить не существующий элемент
        cout << "Пытаемся удалить не существующий элемент\n";
        ir.remove(21);



    }
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    return 0;
}