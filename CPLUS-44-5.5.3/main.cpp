#include <iostream>
#include "human.h"
//using namespace std;
/*
    ������� 5.5.3.
    �������� ������ ������ ����������� �����������.
*/
int main()
{
    Human m("�����", "���������", 23, 82, 183);
    m.setYear(2024);
    m.setStep(200);

    Human m2(39);
    m2.setYear(2024);
    m2.setStep(200);
    //m2.createUsers("Alex", "Och", 50, 82, 183);


    setlocale(LC_ALL, "ru_RU.UTF-8");
    //setlocale(LC_ALL, "");

    std::cout << "��� ��������: " << m.humanBD() << "\n";
    std::cout << "��� ���: " << m.imt() << "\n";
    std::cout << "������� �� ������: " << m.getStep() << " �����" << "\n";

    m.humanInfo();
    //m2.age = 40;
    std::cout << "��� ��������: " << m2.humanBD() << "\n";
    std::cout << "��� ���: " << m2.imt() << "\n";
    std::cout << "������� �� ������: " << m2.getStep() << " �����" << "\n";

    //Human m3 = Human(const Human &m);
    //Human m3(23);
    //std::cout << "��� ��������: " << m3->humanBD() << "\n";
    //std::cout << "��� ���: " << m3.imt() << "\n";
    //std::cout << "������� �� ������: " << m3.getStep() << " �����" << "\n";

    m2.humanInfo();


    return 0;
}
