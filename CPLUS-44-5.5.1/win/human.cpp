#include "human.h"

// ������������
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
double Human::imt()
{
    //cout << "��� ���: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
    return (weight * 1.0 / (height / 100.0 * height / 100.0));
}
// ��������� ��� ��������
short Human::humanBD()
{
    return (currentYear - age);
}
// ����� ������� ���������� � ��������
void Human::humanInfo()
{
       //cout << "���: " << name << endl;
       //cout << "�������: " << lastname << endl;
       //cout << "�������: " << age << endl;
       //cout << "���: " << weight << endl;
       //cout << "����: " << height << endl;
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
long Human::getStep()
{
    // ��������� ����
    return currentStep;
}
