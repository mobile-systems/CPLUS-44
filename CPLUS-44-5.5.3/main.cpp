#include <iostream>
#include "human.h"
//using namespace std;
/*
    Задание 5.5.3.
    Добавьте вашему классу конструктор копирования.
*/
int main()
{
    Human m("Мария", "Очеретина", 23, 82, 183);
    m.setYear(2024);
    m.setStep(200);

    Human m2(39);
    m2.setYear(2024);
    m2.setStep(200);
    //m2.createUsers("Alex", "Och", 50, 82, 183);


    setlocale(LC_ALL, "ru_RU.UTF-8");
    //setlocale(LC_ALL, "");

    std::cout << "Год рождения: " << m.humanBD() << "\n";
    std::cout << "Ваш ИМТ: " << m.imt() << "\n";
    std::cout << "Сегодня Вы прошли: " << m.getStep() << " шагов" << "\n";

    m.humanInfo();
    //m2.age = 40;
    std::cout << "Год рождения: " << m2.humanBD() << "\n";
    std::cout << "Ваш ИМТ: " << m2.imt() << "\n";
    std::cout << "Сегодня Вы прошли: " << m2.getStep() << " шагов" << "\n";

    //Human m3 = Human(const Human &m);
    //Human m3(23);
    //std::cout << "Год рождения: " << m3->humanBD() << "\n";
    //std::cout << "Ваш ИМТ: " << m3.imt() << "\n";
    //std::cout << "Сегодня Вы прошли: " << m3.getStep() << " шагов" << "\n";

    m2.humanInfo();


    return 0;
}
