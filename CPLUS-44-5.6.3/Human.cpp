#include "Human.h"
#include <iostream>
// ������������
Human::Human()
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "ru_RU");
    std::cout << "������ ������ ������ �� ���������.\n";
    this->name = "";
    this->lastname = "";
    this->age = 0;
    this->height = 0;
    this->weight = 0;
    this->currentStep = 0;
    this->currentYear = 2024;
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
    this->currentStep = 0;
    this->currentYear = 2024;
}
Human::Human(const char* name, short age)
{
    std::cout << "������ ������ ������ 2 ��������.\n";
    this->name = name;
    this->age = age;
    this->lastname = "";
    this->height = 0;
    this->weight = 0;
    this->currentStep = 0;
    this->currentYear = 2024;
}
Human::Human(short a)
{
    std::cout << "������ ������ ������ 1 ��������.\n";
    this->age = age;
    //this->name = "";
    //this->lastname = "";
    //this->height = 0;
    //this->weight = 0;
    //this->currentStep = 0;
    //this->currentYear = 2024;
}

Human::Human(const Human& other)
{
    std::cout << "������ ������ � ������ ������.\n";
    this->age = other.age;
    this->name = other.name;
    this->lastname = other.lastname;
    this->height = other.height;
    this->weight = other.weight;
    this->currentStep = other.currentStep;
    this->currentYear = other.currentYear;
}

Human::~Human()
{
    std::cout << "��������� ������ ������.\n";
}

Human& Human::operator++()
{
    ++height; // �������� ������ ������
    return *this; //���������� ������� ��� ���������� ���� ������
}

Human& Human::operator--()
{
    --height; // �������� ������ ������
    return *this; //���������� ������� ��� ���������� ���� ������
}

Human Human::operator++(int)
{
    Human newObj(*this); // ������� ����� ������
    ++(*this); // ����������� ���������� ������� � ������� ��� ������ ��� ������������� ��������� ����-����������
    return newObj; // ���������� ����� ������!
}

Human Human::operator--(int)
{
    Human newObj(*this); //  ���������� �����������
    --(*this);
    return newObj;
}
// ��������� ���������
bool Human::operator <(const Human& other)
{
    return this->height < other.height; //����������, ���� ������ ���������� true
}
bool Human::operator >(const Human& other)
{
    return this->height > other.height; //����������, ���� ������ ���������� true
}

ostream &operator<<(ostream &output, const Human &m) {
    output << "���: " << m.name << "\n";
    output << "�������: " << m.age << "\n";
    output << "����: " << m.height << "\n";
    output << "���: " << m.weight << "\n";
    return output;
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
