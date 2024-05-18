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
    Human(const char* name, const char* lastname, short age, short weight, short height);
    Human(const char* name, short age);
    Human(short age);
    Human();
    ~Human();
    // Устанавливаем текущий год
    void setYear(short year);
    // Создать пользователя
    void createUsers(const char* name, const char* lastname, short age, short weight, short height);
    // Расчёт ИМТ
    double imt() const;
    // Вычисляем год рождения
    short humanBD() const;
    // Вывод краткой информации о пациенте
    void humanInfo();
    void setStep(long);
    long getStep() const;
};
