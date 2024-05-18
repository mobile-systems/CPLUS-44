#include "human.h"

// Создать пользователя
void Human::createUsers(const char* n, const char* ln, short a, short w, short h)
{
    name = n;
    lastname = ln;
    age = a;
    weight = w;
    height = h;
}
// Расчёт ИМТ
double Human::imt()
{
    //cout << "Ваш ИМТ: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
    return (weight * 1.0 / (height / 100.0 * height / 100.0));
}
// Вычисляем год рождения
short Human::humanBD()
{
    return (currentYear - age);
}
// Вывод краткой информации о пациенте
void Human::humanInfo()
{
 /*   cout << "Имя: " << name << endl;
    cout << "Фамилия: " << lastname << endl;
    cout << "Возраст: " << age << endl;
    cout << "Вес: " << weight << endl;
    cout << "Рост: " << height << endl;*/
}

short Human::setYear(short year)
{
    // Устанавливаем текущий год
    currentYear = year;
    return 0;
}

// Выставить пройденное количество шагов
long Human::setStep(long step)
{
    // Устанавливаем количество пройденных шагов.
    currentStep = step;
    return 0;
}

// Получить пройденное количество шагов
long Human::getStep()
{
    // Считываем шаги
    return currentStep;
}
