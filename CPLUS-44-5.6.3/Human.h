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
    // ����������� ��������� ��� ���������� � ���������� �����
    Human& operator++();
    Human& operator--();
    Human operator++(int);
    Human operator--(int);
    bool operator < (const Human& other);
    bool operator > (const Human& other);

    friend ostream &operator<<(ostream &output, const Human &m); //  �������� ����� friend �� ����� ��������� � ��������� ������
    
    // ������������� ������� ���
    void setYear(short year);
    // ������� ������������
    void createUsers(const char* n, const char* ln, short a, short w, short h);
    // ������ ���
    double imt() const;
    // ��������� ��� ��������
    short humanBD() const;
    // ����� ������� ���������� � ��������
    void humanInfo();
    void setStep(long);
    long getStep() const;
};
