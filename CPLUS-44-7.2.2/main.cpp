#include<iostream>
#include<string>
//#include<cassert>
#include <climits>

/*
Перепишите функцию вычисления гармонического среднего, так чтобы функция возвращала 
булевское значение, а результат записывался в аргумент типа float — hmean, 
переданный в функцию по ссылке. В случае неудачи значение hmean должно быть 0.0

Дополните данную функцию ассертами, которые покроют нештатные или нелогичные ситуации
 (нулевой массив, элемент массива равен нулю, сумма элементов массива равна нулю), 
 дополните ассерты текстом ошибки. Вспомните, что вещественные числа мы не можем 
 сравнивать напрямую с нулем, а сравниваем их с погрешностью — эпсилоном, 
 в нашем примере возьмем число 0.0001 за эпсилон.
*/
bool harmonic_mean(float arr[], int size, float& result)
{
    if (size) 
    //(size && "Array size 0!");
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        assert( (arr[i] >  0.0001 || arr[i] < -0.0001) && "Array element 0!");
        sum = sum + 1.0 / arr[i];
    }

    assert((sum > 0.0001 || sum < -0.0001) && "The sum of the array elements is 0!");
    return size/sum;
}

// Задание 7.2.2
int main()
{
    float arr[] = {0.00011,2,3,4,5,6,7,8,9,0};
    float result;

    if (harmonic_mean(arr, 9, result))
    std::cout << harmonic_mean(arr, 9) << "\n";

    return 0;
}
