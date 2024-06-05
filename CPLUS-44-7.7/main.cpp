/*
    В данном задании, мы предлагаем вам написать контейнер данных IntegerArray — объект, 
который хранит целые числа и способен вычислить собственный размер во время выполнения программы.

За основу вы можете взять контейнер IntArray. Однако ваша задача — использовать вместо ассертов 
механизм исключения C++ , генерировать исключения наследники exception — для выхода за пределы 
массива — bad_range, предоставление неправильной длины массиву bad_length. Напишите объявление 
и реализацию данного контейнера в двух разных файлах (h и сpp), а в функции main протестируйте 
все пограничные случаи и убедитесь, что ваш контейнер безопасен!

https://www.learncpp.com/cpp-tutorial/container-classes/
*/
#include <cassert> // for assert()

class IntArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntArray() = default;

    IntArray(int length):
        m_length{ length }
    {
        assert(length >= 0);

        if (length > 0)
            m_data = new int[length]{};
    }
};