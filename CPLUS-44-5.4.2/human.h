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
    // ������������� ������� ���
    short setYear(short year);
    // ������� ������������
    void createUsers(const char* n, const char* ln, short a, short w, short h);
    // ������ ���
    double imt();
    // ��������� ��� ��������
    short humanBD();
    // ����� ������� ���������� � ��������
    void humanInfo();
    long setStep(long);
    long getStep();
};
