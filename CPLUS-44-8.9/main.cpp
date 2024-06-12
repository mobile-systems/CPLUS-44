#include <iostream>
// 8.9. Итоги / Вопросы для подготовки к техническому собеседованию:
// Напишите шаблонную функцию swap().
template <typename T> void swap(T& x, T& y)
{
    T z = x;
    x = y;
    y = z;
}

int main()
{
    int i =4, j =5;
    std::cout << "Исходные значения переменных: " << i << " " << j << std::endl;
    swap<int>( i, j); 
    std::cout << "Исходные значения переменных: " << i << " " << j << std::endl; 

    long x = 1001, y = 20002;
    std::cout << "Исходные значения переменных: " << x << " " << y << std::endl;
    swap<long>(x, y);
    std::cout << "Исходные значения переменных: " << x << " " << y << std::endl;

    return 0;
}