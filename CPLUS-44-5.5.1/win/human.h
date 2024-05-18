#pragma once
//#include <iostream>

class Human
{
private:
    const char* name;
    const char* lastname;
    short age = 0;
    short weight;
    short height;
    short currentYear;
    long currentStep;
public:
    Human(const char* n, const char* ln, short a, short w, short h);
    Human(const char* n, short a);
    Human(short a);
    // Устанавливаем текущий год
    void setYear(short year);
    // Создать пользователя
    void createUsers(const char* n, const char* ln, short a, short w, short h);
    // Расчёт ИМТ
    double imt();
    // Вычисляем год рождения
    short humanBD();
    // Вывод краткой информации о пациенте
    void humanInfo();
    void setStep(long);
    long getStep();
};
