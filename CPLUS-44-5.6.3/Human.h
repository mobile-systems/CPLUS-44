#pragma once
#include <iostream>

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
    Human();
    Human(const Human& other);
    ~Human();
    // Перегружаем операторы для увеличения и уменьшения роста
    Human& operator++();
    Human& operator--();
    Human operator++(int);
    Human operator--(int);
    bool operator < (const Human& other);
    bool operator > (const Human& other);

    friend ostream &operator<<(ostream &output, const Human &m); //  ключевое слово friend мы будем разбирать в следующем модуле
    
    // Устанавливаем текущий год
    void setYear(short year);
    // Создать пользователя
    void createUsers(const char* n, const char* ln, short a, short w, short h);
    // Расчёт ИМТ
    double imt() const;
    // Вычисляем год рождения
    short humanBD() const;
    // Вывод краткой информации о пациенте
    void humanInfo();
    void setStep(long);
    long getStep() const;
};
