#include <iostream>
#include "human.h"
using namespace std;
/*
    ������� 5.4.2.
    ��������� ����� Human �� ������������ ���� � ���� � �����������.
*/

int main()
{
    Human m2;
    m2.setYear(2024);
    m2.setStep(200);
    m2.createUsers("Alex", "Och", 50, 82, 183);

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    m2.humanInfo();
    //m2.age = 40;
    cout << "��� ��������: " << m2.humanBD() << endl;
    cout << "��� ���: " << m2.imt() << endl;
    cout << "������� �� ������: " << m2.getStep() << " �����" << endl;

    return 0;
}
