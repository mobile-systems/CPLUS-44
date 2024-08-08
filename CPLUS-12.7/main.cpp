//12.7.Домашнее задание
#include <iostream>
#include <string>
//#define DEBUG 1
using namespace std;

// Поиск и сравнение числа K
bool IsKPeriodic(char text[], int K)
{
    int i = 0; // Счётчик для циклов
    int textCount[256] = {0}; // Массив для подсчёта повторяющихся символов
    // Подсчёт повторений символов
    while (i < (strlen(text)))
    {
        textCount[text[i]]++;
#ifdef DEBUG
        std::cout << "Символ: " << text[i] << " ";
#endif // DEBUG
        i++;
    }
    std::cout << "\n";
#ifdef DEBUG
    int j = 0; // Для переноса на новую строку выводимого массива данных
    // Выводим массив подсчёта повторяющихся символов
    for (size_t i = 0; i < 256; i++)
    {
        std::cout << textCount[i] << " "; // = 0;
        if (j == 31)
        {
            j = 0;
            std::cout << "\n";
        }
        else
        {
            j++;
        }
    }
    std::cout << "\n";
#endif // DEBUG
    int minFind = 0, // Минимальное количество повторений символов (очистка от шума, одиночных посторонних символов)
        avgFind = 0, // Целевое количество повторений символов
        maxFind = 0; // Максимальное количество повторений символов (повторяющихся в паттерне символов)
    // Поиск количества вхождений символов
    for (i = 0; i < 256; i++)
    {
        if (textCount[i])
        {
            if (minFind > 0)
            {
                // Ищем шум - одиночные посторонние символы
                if(minFind > textCount[i])
                    minFind = textCount[i];
            }
            else
            {
                minFind = textCount[i];
            }
            if (maxFind > 0)
            {
                // Поиск повторяющихся в паттерне символов
                if (maxFind < textCount[i])
                {
                    maxFind = textCount[i];
                }
            }
            else
            {
                maxFind = textCount[i];
            }
            std::cout << textCount[i] << " = " << (char)i << "\n";
        }
    }
    // Поиск количества целевых вхождений
    for (i = 0; i < 256; i++)
    {
        if (textCount[i])
        {
            if (avgFind > 0)
            {
                // Ищем вхождение основных (не повторяющихся) символов паттерна
                if ((minFind < textCount[i]) && (textCount[i] < maxFind))
                {
                    //maxFind = minFind;
                    avgFind = textCount[i];
                }
            }
            else
            {
                avgFind = textCount[i];
            }
        }
    }
    std::cout << "Минимальное количество вхождений: " << minFind << ", целевое количество вхождений: " << avgFind << " максимальное количество вхождений : " << maxFind << "\n";
    // Сравниваем полученную и ожидаемую кратность
    if (avgFind > 0 && K == (strlen(text) / avgFind))
    {
        return true;
    } else
        return false;
}

int main()
{
    //char text[] = "abcabcabcabc";
    char text[] = "abcabczabcaabc"; // Входная строка
    int K = 3; // Ожидаемая кратность
    //char text[] = "abcdefabcdef";
    //int K = 6;
    setlocale(LC_ALL, "rus");

    if(IsKPeriodic(text, K))
        std::cout << "Кратность K: " << K << " соответствует.\n";
    else
        std::cout << "Кратность не соответствует.\n";

    return 0;
}
