/* Задание 7.3.3
Перепишите функцию вычисления среднего гармонического harmonic_mean, чтобы эта функция
генерировала строки исключение если передан нулевой массив — "zero array", если один 
из элементов массива ноль — "element zero in array" или если сумма элементов массива 
ноль — "zero sum of elements". Напишите тест программу для массивов:
    float array1[2] = {0.0, 0.0};
    float array2[2] = {1.5, -1.5};
    float array3[2] = {2.3, 0.5};
*/
#include<iostream>
#include<string>

const float fZero = 0.0001;
float harmonic_mean(float arr[], int size)
{
    if (!size)  // Размер массива 0?
    {
        throw "zero array";
    }

    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        // Элемент массива 0?
        if (!(arr[i] >  fZero || arr[i] < -fZero))
        {
            throw "element zero in array";
        }
        sum = sum + 1.0 / arr[i];
    }

    // Сумма элементов массива 0?
    if (!(sum > fZero) || (sum < -fZero))
    {
        throw "zero sum of elements";
    }
    return (size/sum);
}

int main()
{
    float array1[2] = {0.0, 0.0};
    float array2[2] = {1.5, -1.5};
    float array3[2] = {2.3, 0.5};
    float hmean;

    try
    {
        hmean = harmonic_mean(array1, 2);
        std::cout << "Гармоническое среднее: " << hmean << "\n";
    }
    catch(const char* e)
    {
        std::cout << "Возможно деление на ноль: " << e << "\n";
    }

    try
    {
        hmean = harmonic_mean(array2, 2);
        std::cout << "Гармоническое среднее: " << hmean << "\n";
    }
    catch(const char* e)
    {
        std::cout << "Возможно деление на ноль: " << e << "\n";
    }

    try
    {
        hmean = harmonic_mean(array3, 2);
        std::cout << "Гармоническое среднее: " << hmean << "\n";
    }
    catch(const char* e)
    {
        std::cout << "Возможно деление на ноль: " << e << "\n";
    }

    return 0;
}
