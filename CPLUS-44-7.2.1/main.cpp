#include<iostream>
#include<string>
#include<cassert>

/*
Дополните данную функцию ассертами, которые покроют нештатные или нелогичные ситуации
 (нулевой массив, элемент массива равен нулю, сумма элементов массива равна нулю), 
 дополните ассерты текстом ошибки. Вспомните, что вещественные числа мы не можем 
 сравнивать напрямую с нулем, а сравниваем их с погрешностью — эпсилоном, 
 в нашем примере возьмем число 0.0001 за эпсилон.
*/
float harmonic_mean(float arr[], int size)
{
    assert(size && "Array size 0!");
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        assert( (arr[i] >  0.0001 || arr[i] < -0.0001) && "Array element 0!");
        sum = sum + 1.0 / arr[i];
    }

    assert((sum > 0.0001 || sum < -0.0001) && "The sum of the array elements is 0!");
    return size/sum;
}

// Задание 7.2.1
int main()
{
    float arr[] = {0.00011,0.00011,3,4,5,6,7,8,9,0};
    std::cout << harmonic_mean(arr, 9) << "\n";

    return 0;
}
