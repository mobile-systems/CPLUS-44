﻿//#include <iostream>
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//    for (int i = 0; i < argc; i++)
//        cout << argv[i] << endl;
//    return 0;
//}
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");
    if (argc != 3)
    {
        cout << "Введите параметр конвертации F или C и значение!" << endl;
        return 1;
    }
    if (*argv[1] == 'F')
    {
        float c = atof(argv[2]);
        float f = (9.0 * c / 5.0) + 32;
        cout << "Температура в градусах по Фаренгейту : " << f << endl;
        return 0;
    }
    else if (*argv[1] == 'C')
    {
        float f = atof(argv[2]);
        float c = ((f * 5.0) - (5.0 * 32)) / 9;
        cout << "Температура в градусах по Цельсию : " << c << endl;
        return 0;
    }
    else
    {
        cout << "Неправильно заданы параметры";
        return 1;
    }
}
