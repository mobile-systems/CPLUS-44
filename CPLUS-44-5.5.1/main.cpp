#include <iostream>
#include "human.h"
//using namespace std;
/*
    Задание 5.5.1.
    Добавьте несколько параметризованных конструкторов в ваш класс Human.
*/
int main()
{
    Human m("Иван", "Петров", 23, 82, 183);
    m.setYear(2024);
    m.setStep(200);

    Human m2(39);
    m2.setYear(2024);
    m2.setStep(200);

    setlocale(LC_ALL, "ru_RU.UTF-8");
    //setlocale(LC_ALL, "");

    std::cout << "Год рождения: " << m.humanBD() << "\n";
    std::cout << "Ваш ИМТ: " << m.imt() << "\n";
    std::cout << "Сегодня Вы прошли: " << m.getStep() << " шагов" << "\n";

    m.humanInfo();
    std::cout << "Год рождения: " << m2.humanBD() << "\n";
    std::cout << "Ваш ИМТ: " << m2.imt() << "\n";
    std::cout << "Сегодня Вы прошли: " << m2.getStep() << " шагов" << "\n";
    //m2.humanInfo();

    return 0;
}
