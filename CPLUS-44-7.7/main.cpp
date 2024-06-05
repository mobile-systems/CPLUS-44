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
#include <iostream>
#include <exception>
using namespace std;

class bad_range final : public exception {
public:
    virtual const char* what() const noexcept override { return "RANGE ERROR!"; }
};

class bad_length final : public exception {
public:
    virtual const char* what() const noexcept override { return "LENGTH ERROR!"; }
};

class IntegerArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntegerArray() = default;

    IntegerArray(int length):
        m_length{ length }
    {
        if(length < 0)
        {
            //throw "Lenght less 0";
            throw bad_length();
        }

        if (length > 0)
            m_data = new int[length]{};
    }
    ~IntegerArray()
    {
        delete[] m_data;
        // we don't need to set m_data to null or m_length to 0 here, since the object will be destroyed immediately after this function anyway
    }

    void erase()
    {
        delete[] m_data;
        // We need to make sure we set m_data to nullptr here, otherwise it will
        // be left pointing at deallocated memory!
        m_data = nullptr;
        m_length = 0;
    }
    int& operator[](int index)
    {
        if (index >= 0 && index < m_length) {}
        else
        {
            //throw "Index out of range";
            throw bad_range();
        }
        return m_data[index];
    }

    int getLength() const { return m_length; }
};

int main()
{
    try
    {
        IntegerArray ir(10);
        for (int i{ 0 }; i < 10; ++i)
            ir[i] = i + 1;
        
        cout << "Index #3: " << ir[4] << "\n";
        cout << "Size of Array: " << ir.getLength() << "\n";
        
    }
    //catch (const char* exception)
    //{
    //    cout << exception << "\n";
    //}
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    return 0;
}