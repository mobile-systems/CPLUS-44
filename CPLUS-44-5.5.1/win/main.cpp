#include <iostream>
#include "human.h"
using namespace std;
/*
    ������� 5.5.1.
    �������� ��������� ����������������� ������������� � ��� ����� Human.
*/
int main()
{
    Human m("Maria", "Och", 23, 82, 183);
    m.setYear(2024);
    m.setStep(200);

    Human m2(39);
    m2.setYear(2024);
    m2.setStep(200);
    //m2.createUsers("Alex", "Och", 50, 82, 183);


    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    cout << "��� ��������: " << m.humanBD() << endl;
    cout << "��� ���: " << m.imt() << endl;
    cout << "������� �� ������: " << m.getStep() << " �����" << endl;

    m2.humanInfo();
    //m2.age = 40;
    cout << "��� ��������: " << m2.humanBD() << endl;
    cout << "��� ���: " << m2.imt() << endl;
    cout << "������� �� ������: " << m2.getStep() << " �����" << endl;

    return 0;
}
