#include <iostream>
#include "human.h"
using namespace std;
/*
    Задание 5.5.1.
    Добавьте несколько параметризованных конструкторов в ваш класс Human.
*/
int main()
{
    Human m("Maria", "Och", 23, 82, 183);
    m.setYear(2024);
    m.setStep(200);

    Human m2(39);
    m2.setYear(2024);
    m2.setStep(200);
    //m2.createUsers("Alex", "Och", 50, 82, 183);


    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    cout << "Год рождения: " << m.humanBD() << endl;
    cout << "Ваш ИМТ: " << m.imt() << endl;
    cout << "Сегодня Вы прошли: " << m.getStep() << " шагов" << endl;

    m2.humanInfo();
    //m2.age = 40;
    cout << "Год рождения: " << m2.humanBD() << endl;
    cout << "Ваш ИМТ: " << m2.imt() << endl;
    cout << "Сегодня Вы прошли: " << m2.getStep() << " шагов" << endl;

    return 0;
}
