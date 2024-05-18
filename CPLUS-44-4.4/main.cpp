//#include <iostream>
//using namespace std;
//
//void foo()
//{
//    int static i = 0; // инициализированная статическая переменная
//    i++;
//    cout << i << endl;
//
//};
//
//int main()
//{
//    foo(); // на консоль выведено 1
//    foo(); // на консоль выведено 2, так как предыдущий вызов foo уже изменил значение на 1
//}
#include <iostream>
using namespace std;

int globalValue; // неинициализированная глобальная переменная 

int main()
{
    cout << ++globalValue << endl; // globalValue = 0
    return 0;
}