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
    // ������������� ������� ���
    void setYear(short year);
    // ������� ������������
    void createUsers(const char* n, const char* ln, short a, short w, short h);
    // ������ ���
    double imt();
    // ��������� ��� ��������
    short humanBD();
    // ����� ������� ���������� � ��������
    void humanInfo();
    void setStep(long);
    long getStep();
};
