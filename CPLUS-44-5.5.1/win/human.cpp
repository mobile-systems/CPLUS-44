#include "human.h"

// Конструкторы
Human::Human(const char* n, const char* ln, short a, short w, short h)
{
    name = n;
    lastname = ln;
    age = a;
    weight = w;
    height = h;
}
Human::Human(const char* n, short a)
{
    name = n;
    age = a;
}
Human::Human(short a)
{
    age = a;
}

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
       //cout << "Имя: " << name << endl;
       //cout << "Фамилия: " << lastname << endl;
       //cout << "Возраст: " << age << endl;
       //cout << "Вес: " << weight << endl;
       //cout << "Рост: " << height << endl;
}

void Human::setYear(short year)
{
    // Устанавливаем текущий год
    currentYear = year;
}

// Выставить пройденное количество шагов
void Human::setStep(long step)
{
    // Устанавливаем количество пройденных шагов.
    currentStep = step;
}

// Получить пройденное количество шагов
long Human::getStep()
{
    // Считываем шаги
    return currentStep;
}
