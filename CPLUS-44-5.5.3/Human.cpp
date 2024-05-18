#include "Human.h"
#include <iostream>
// ������������
Human::Human()
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "ru_RU");
    std::cout << "������ ������ ������ �� ���������.\n";
}
Human::Human(const char* name, const char* lastname, short age, short weight, short height)
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "ru_RU");
    std::cout << "������ ������ ������ ��� ��������.\n";
    this->name = name;
    this->lastname = lastname;
    this->age = age;
    this->weight = weight;
    this->height = height;
}
Human::Human(const char* name, short age)
{
    std::cout << "������ ������ ������ 2 ��������.\n";
    this->name = name;
    this->age = age;
}
Human::Human(short a)
{
    std::cout << "������ ������ ������ 1 ��������.\n";
    this->age = age;
}

Human::Human(const Human& other)
{
    this->age = other.age;
    this->name = other.name;
    this->lastname = other.lastname;
    this->height = other.height;
    this->weight = other.weight;
    this->currentStep = other.currentStep;
}

Human::~Human()
{
    std::cout << "��������� ������ ������.\n";
}

// ������� ������������
void Human::createUsers(const char* n, const char* ln, short a, short w, short h)
{
    name = n;
    lastname = ln;
    age = a;
    weight = w;
    height = h;
}
// ������ ���
double Human::imt() const
{
    //cout << "��� ���: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
    return (weight * 1.0 / (height / 100.0 * height / 100.0));
}
// ��������� ��� ��������
short Human::humanBD() const
{
    return (currentYear - age);
}
// ����� ������� ���������� � ��������
void Human::humanInfo()
{
    std::cout << "���: " << name << "\n";
    std::cout << "�������: " << lastname << "\n";
    std::cout << "�������: " << age << "\n";
    std::cout << "���: " << weight << "\n";
    std::cout << "����: " << height << "\n";
}

void Human::setYear(short year)
{
    // ������������� ������� ���
    currentYear = year;
}

// ��������� ���������� ���������� �����
void Human::setStep(long step)
{
    // ������������� ���������� ���������� �����.
    currentStep = step;
}

// �������� ���������� ���������� �����
long Human::getStep() const
{
    // ��������� ����
    return currentStep;
}
