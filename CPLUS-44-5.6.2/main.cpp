#include <iostream>
#include "Human.h"
using namespace std;
/*
    ������� 5.6.2.
    ����������� �������� ������� � ������� � ��������� Human ��� ��������� �� �����.
*/
int main()
{
    Human m("����", "������", 23, 82, 183);
    m.setYear(2024);
    m.setStep(200);

    //Human m2(39);
    //m2.setYear(2024);
    //m2.setStep(200);
    //m2.createUsers("Alex", "Och", 50, 82, 183);


    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    //std::cout << "��� ��������: " << m.humanBD() << "\n";
    cout << "��� ��������: " << m.humanBD() << "\n";
    //std::cout << "��� ���: " << m.imt() << "\n";
    cout << "��� ���: " << m.imt() << "\n";
    //std::cout << "������� �� ������: " << m.getStep() << " �����" << "\n";
    cout << "������� �� ������: " << m.getStep() << " �����" << "\n";
    m.humanInfo();

    //m2.age = 40;
    //std::cout << "��� ��������: " << m2.humanBD() << "\n";
    //std::cout << "��� ���: " << m2.imt() << "\n";
    //std::cout << "������� �� ������: " << m2.getStep() << " �����" << "\n";

    //Human* m3 = new Human(m);
    ////Human m3(23);
    //m3++;
    //std::cout << "\n����� \n";
    //std::cout << "��� ��������: " << m3->humanBD() << "\n";
    //std::cout << "��� ���: " << m3->imt() << "\n";
    //std::cout << "������� �� ������: " << m3->getStep() << " �����" << "\n";
    //m3->humanInfo();
    //delete m3;

    Human m4 = Human(m);
    ++m4;
    std::cout << "����� \n";
    std::cout << "��� ��������: " << m4.humanBD() << "\n";
    std::cout << "��� ���: " << m4.imt() << "\n";
    std::cout << "������� �� ������: " << m4.getStep() << " �����" << "\n";
    m4.humanInfo();
    //delete m3;

    m4++;
    m4.humanInfo();
    if (m > m4)
    {
        cout << "--- ������ ������ ������� ---" << endl; // �� ���������, ������ ������ ������
    }
    else {
        cout << "--- ������ ������ ������� ---" << endl; // �� ���������, ������ ������ ������
    }
    m4--;
    m4--;
    m4.humanInfo();

    return 0;
}
