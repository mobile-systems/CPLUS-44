#include <iostream>
using namespace std;

int main()
{
    char op;	// e - зашифровать (encrypt) или d - расшифровать (decrypt)
    int size, x;
    
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "Выберите пожалуйста режим работы e - зашифровать или d - расшифровать: ";
    cin >> op;
    if (!(op == 'e' || op == 'E' || op == 'd' || op == 'D'))
    {
        cout << "Введён неверный режим работы!" << endl;
        return 0;
    }
    
    cout << "Укажите какой длины будет строка: ";
    cin >> size;
    char *arr = new char[size+1]; // Строка, с которой будем производить преобразования
    cout << "Введите пожалуйста текст сообщения: ";
    cin >> arr;
    cout << "Введите пожалуйста ключ шифра: ";
    cin >> x;

    cout << "Оригинальная строка:\t";
    cout << arr << endl;

    if(op == 'e' || op == 'E')
    {
        for (int i = 0; i < size; ++i)
        {
            if((arr[i] >= 'a' && arr[i] <= ('z' - x)) || (arr[i] >= 'A' && arr[i] <= ('Z' - x)))
            {
                arr[i] += x;
            } else if (arr[i] > ('z' - x) && arr[i] <= 'z') {
                arr[i] = 'a' + ((x - ('z' - arr[i]) - 1) % 26);
            } else if (arr[i] > ('Z' - x) && arr[i] <= 'Z') {
                arr[i] = 'A' + ((x - ('Z' - arr[i]) - 1) % 26);
            }
        }
    } else if (op == 'd' || op == 'D') {
        for (int i = 0; i < size; ++i)
        {
            if((arr[i] >= ('a' + x) && arr[i] <= 'z') || (arr[i] >= ('A' + x) && arr[i] <= 'Z'))
            {
                arr[i] -= x;
            } else if (arr[i] >= 'a' && arr[i] < ('a' + x)) {
                arr[i] = 'z' - ((x - (arr[i] - 'a') - 1) % 26);
            } else if (arr[i] >= 'A' && arr[i] < ('A' + x)) {
                arr[i] = 'Z' - ((x - (arr[i] - 'A') - 1) % 26);
            }
        }
    }
    
    cout << "Изменённая строка:\t";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i];
    }
    cout << endl;
    delete[] arr;
    
    return 0;
}
