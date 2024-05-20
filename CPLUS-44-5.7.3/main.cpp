#include <iostream>
#include "Human.h"
using namespace std;
using namespace module_oop;
/*
    Задание 5.7.3.
    Создадим enum, который будет содержать в себе некоторые профессии (TEACHER, PLUMBER, STUDENT и так далее).
    Добавим его в качестве поля класса и проинициализируем в конструкторе.
*/
int main()
{
    Human m(ProfessionsType::STUDENT, "Иван", "Петров", 23, 82, 183);
    m.setYear(2024);
    m.setStep(200);

    //Human m2(39);
    //m2.setYear(2024);
    //m2.setStep(200);
    //m2.createUsers("Alex", "Och", 50, 82, 183);

    setlocale(LC_ALL, "ru_RU.UTF-8");
    //setlocale(LC_ALL, "");

    //std::cout << "Год рождения: " << m.humanBD() << "\n";
    cout << "Год рождения: " << m.humanBD() << "\n";
    //std::cout << "Ваш ИМТ: " << m.imt() << "\n";
    cout << "Ваш ИМТ: " << m.imt() << "\n";
    //std::cout << "Сегодня Вы прошли: " << m.getStep() << " шагов" << "\n";
    cout << "Сегодня Вы прошли: " << m.getStep() << " шагов" << "\n";
    m.humanInfo();
    cout << m;

    //m2.age = 40;
    //std::cout << "Год рождения: " << m2.humanBD() << "\n";
    //std::cout << "Ваш ИМТ: " << m2.imt() << "\n";
    //std::cout << "Сегодня Вы прошли: " << m2.getStep() << " шагов" << "\n";

    //Human* m3 = new Human(m);
    ////Human m3(23);
    //m3++;
    //std::cout << "\nКопия \n";
    //std::cout << "Год рождения: " << m3->humanBD() << "\n";
    //std::cout << "Ваш ИМТ: " << m3->imt() << "\n";
    //std::cout << "Сегодня Вы прошли: " << m3->getStep() << " шагов" << "\n";
    //m3->humanInfo();
    //delete m3;

    Human m4 = Human(m);
    ++m4;
    std::cout << "Копия \n";
    std::cout << "Год рождения: " << m4.humanBD() << "\n";
    std::cout << "Ваш ИМТ: " << m4.imt() << "\n";
    std::cout << "Сегодня Вы прошли: " << m4.getStep() << " шагов" << "\n";
    m4.humanInfo();
    //delete m3;

    m4++;
    m4.humanInfo();
    if (m > m4)
    {
        cout << "--- Первый больше второго ---" << endl; // Не выведется, размер модуля меньше
    }
    else {
        cout << "--- Второй больше первого ---" << endl; // Не выведется, размер модуля меньше
    }
    m4--;
    m4--;
    m4.humanInfo();
    m4++;
    cout << m4;

    return 0;
}
