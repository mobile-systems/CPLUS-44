/*  Задание 7.4.1
Создайте класс BadHarmonicMean. Конструктор класса BadHarmonicMean
принимает вещественное число — значение, которое привело к исключению,
а методом Show выводит сообщение: "Harmonic mean exception" и значение,
которое привело к исключению. Протестируйте программу на векторах:
    float array1[2] = {0.0, 0.0};
    float array2[2] = {1.5, -1.5};
    float array3[2] = {2.3, 0.5};
*/
#include<iostream>
#include<climits>
#include<string>

const float fZero = 0.0001;

class BadHarmonicMean
{
private:
    float _hmean;
    
public:
    BadHarmonicMean(float hmean = 0) : _hmean(hmean) {}
    void Show()
    {
        std::cout << "Harmonic mean exception!\n";
        std::cout << "Arguments are: hmean = " << _hmean << "\n";
    }
};

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
        throw BadHarmonicMean(sum);
    }
    return (size/sum);
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    float array1[2] = {0.0, 0.0};
    float array2[2] = {1.5, -1.5};
    float array3[2] = {2.3, 0.5};
    float hmean;
    BadHarmonicMean bh;

    try
    {
        hmean = harmonic_mean(array1, 2);
        std::cout << "Гармоническое среднее: " << hmean << "\n";
    }
    catch(const char* e)
    {
        std::cout << "Возможно деление на ноль: " << e << "\n";
    }
    catch (BadHarmonicMean &bh)
    {
        bh.Show();
        //std::cout << "Возможно деление на ноль: " << e << "\n";
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
    catch (BadHarmonicMean &bh)
    {
        bh.Show();
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
    catch (BadHarmonicMean &bh)
    {
        bh.Show();
    }

    return 0;
}
