#include<iostream>
#include<string>
//#include<cassert>
#include <climits>

const float fZero = 0.0001;
/*
Перепишите функцию вычисления гармонического среднего, так чтобы функция возвращала 
булевское значение, а результат записывался в аргумент типа float — hmean, 
переданный в функцию по ссылке. В случае неудачи значение hmean должно быть 0.0
*/
bool harmonic_mean(float arr[], int size, float& hmean)
{
    if (!size)  // Размер массива 0?
    {
        hmean = 0;
        return false;
    }

    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        // Элемент массива 0?
        if (!(arr[i] >  fZero || arr[i] < -fZero))
        {
            hmean = 0;
            return false;
        }
        sum = sum + 1.0 / arr[i];
    }

    // Сумма элементов массива 0?
    if (!(sum > fZero) || (sum < -fZero))
    {
        hmean = 0;
        return false;
    }
    hmean = size/sum;
    return true;
}

// Задание 7.2.2
int main()
{
    float arr[] = {1,2,3,4,5,6,7,8,9,0};
    float hmean;

    if (harmonic_mean(arr, 9, hmean))
    {
        std::cout << "Гармоническое среднее: " << hmean << "\n";
    } else {
        std::cout << "Возможно деление на ноль!" << "\n";
    }

    return 0;
}
