#include <iostream>
using namespace std;
/* ������� 5.3.1
�������� ��������� ������� �� ������ �� ���������� Human : ������� ������� ����� ����, 
���������� ���� �������� �� ��������, ������� ��� ������ ������ �� ����� ��������� � �������.
��� ���������� ������� ����� ���� ����� ���������������, ��������, ��������� �������� :
��� = (��� / 2.205) / (���� / 39.37)2
*/
struct Human
{
    const char* name;
    const char* lastname;
    short age;
    short weight;
    short height;
};

void imt(Human h)
{
    //cout << "��� ���: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
    //cout << "��� ���: " << (h.weight / 2.205) / (h.height / 39.37) << endl;
    //return (human.weight / 2.205) / ((human.height / 39.37) * (human.height / 39.37));
    cout << "��� ���: " << (h.weight * 1.0 / (h.height/100.0 * h.height/100.0)) << endl;
}

void humanBD(Human h)
{
    cout << "��� ��������: " << 2024 - h.age << endl;
}

void humanInfo(Human h)
{
    cout << "���: " << h.name << endl;
    cout << "�������: " << h.lastname << endl;
    cout << "�������: " << h.age << endl;
    cout << "���: " << h.weight << endl;
    cout << "����: " << h.height << endl;
}
int main()
{
    Human m;
    int n = 10;

    m.name = "OOP";
    m.weight = 5;

    Human m2;
    m2 = { "Alex", "Och", 49, 82, 183};

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    //cout << sum(m.weight) << endl; // ������� ����������
    //cout << sum(m2.age) << endl; // ������� ����������
    //cout << sizeof(const char*) << " " << sizeof(short) << " " << sizeof(int) << " " << sizeof(long) << endl;
    //cout << sizeof(Human) << endl;

    //Human* m4 = new Human;
    // ��� ���������
    //(*m4).age = 6;
    //m4->height = 183;
    //cout << sum((*m4).age) << endl; // ������� ����������
    //cout << m4->height << endl;
    //delete m4; // ����������� ������, ���������� ��� m

    humanInfo(m2);
    humanBD(m2);
    imt(m2);

    return 0;
}
