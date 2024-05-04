#include <iostream>
using namespace std;

int main()
{
    char op;	// c - Шифрование (crypt) или d - дешифрование (decrypt)
    int size, x;
    
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "Выберите пожалуйста режим работы c - шифрование или d - дешифрование: ";
    cin >> op;
    cout << "Укажите какой длины будет строка: ";
    cin >> size;
    char *arr = new char[size+1]; // Строка, с которой будем производить вычисления
    //char test
    cout << "Введите пожалуйста текст сообщения: ";
    cin >> arr;
    cout << "Введите пожалуйста ключ шифра: ";
    cin >> x;

    cout << "Оригинальная строка: ";
    cout << arr << endl;

    if(op == 'c')
    {
        for (int i = 0; i < size; ++i)
        {
            if(arr[i] >= 'a' && arr[i] <('z'-x)) 
            {
                arr[i] += x; // Иначе заменяем на следующую
                continue;
            } else if (arr[i] >= ('z'-x) && arr[i] <= 'z') {
                arr[i] = 'a' + x;
                continue;
            } else if (arr[i] >= 'A' && arr[i] < ('Z'-x)) {
                arr[i] += x; // Иначе заменяем на следующую
                continue;
            }
            else if (arr[i] >= ('Z' - x) && arr[i] <= ('Z')) {
                arr[i] = 'A' + x; // Иначе заменяем на следующую
                continue;
            }
            //} else if (arr[i]='z') {
            //    arr[i] = 'a';
            //} else if (arr[i]='Z') {
            //    arr[i] = 'A';
            //}
        }
    } else if (op == 'd') {
        for (int i = 0; i < size; ++i)
        {
            if((arr[i] >= 'a' && arr[i] <'z') || (arr[i] >= 'A' && arr[i] <'Z'))
            {
                arr[i] -= x; // Иначе заменяем на следующую
            } else if (arr[i]='z') {
                arr[i] = 'a';
            } else if (arr[i]='Z') {
                arr[i] = 'A';
            }
        }
    }
    
    cout << "Изменённая строка: ";
    cout << arr << endl;
 /*   for (int i = 0; i < size; ++i)
    {
        cout << arr[i];
    }
    cout << endl;
    */
    delete[] arr;
    
    return 0;
}
