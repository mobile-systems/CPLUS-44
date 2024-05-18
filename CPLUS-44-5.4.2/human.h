#pragma once
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
    // Устанавливаем текущий год
    short setYear(short year);
    // Создать пользователя
    void createUsers(const char* n, const char* ln, short a, short w, short h);
    // Расчёт ИМТ
    double imt();
    // Вычисляем год рождения
    short humanBD();
    // Вывод краткой информации о пациенте
    void humanInfo();
    long setStep(long);
    long getStep();
};
