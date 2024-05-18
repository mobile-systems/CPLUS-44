#include <iostream>
#include "human.h"
using namespace std;
/*
    Задание 5.4.2.
    Разделите класс Human на заголовочный файл и файл с реализацией.
*/

int main()
{
    Human m2;
    m2.setYear(2024);
    m2.setStep(200);
    m2.createUsers("Alex", "Och", 50, 82, 183);

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    m2.humanInfo();
    //m2.age = 40;
    cout << "Год рождения: " << m2.humanBD() << endl;
    cout << "Ваш ИМТ: " << m2.imt() << endl;
    cout << "Сегодня Вы прошли: " << m2.getStep() << " шагов" << endl;

    return 0;
}
