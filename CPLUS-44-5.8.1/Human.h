#pragma once

#include <iostream>
#include <string>
using namespace std;

namespace module_oop {

enum ProfessionsType {
    TEACHER=0, 
    PLUMBER,
    STUDENT
};

class Human
{
private:
    ProfessionsType type;
    string name;
    string lastname;
    short age = 0;
    short weight;
    short height;
    short currentYear;
    long currentStep;
public:
    Human(ProfessionsType type, string name, string lastname, short age, short weight, short height);
    Human(string name, short age);
    Human(short age);
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

    friend std::ostream &operator<<(std::ostream &output, const Human &m); //  ключевое слово friend мы будем разбирать в следующем модуле
    
    // Устанавливаем текущий год
    void setYear(short year);
    // Создать пользователя
    void createUsers(const std::string name, const std::string lastname, short age, short weight, short height);
    // Расчёт ИМТ
    double imt() const;
    // Вычисляем год рождения
    short humanBD() const;
    // Вывод краткой информации о пациенте
    void humanInfo();
    void setStep(long);
    long getStep() const;
};

}; // Завершаем пространство module_oop