// ������� 5.3.2
// ��������� � ���������� ������� ������� ���������� ��� ������� - ����� ��������� Human.
//
// ��� ����� ����������� ��� ��������� ������� ������ �������� ���������, �������� ���������,
// ����� �������� ������ ���������� Human, ��� ��� ��� ������ �� ���������.
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
    // ������ ���
    double imt()
    {
        //cout << "��� ���: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
        //cout << "��� ���: " << (h.weight / 2.205) / (h.height / 39.37) << endl;
        //return (human.weight / 2.205) / ((human.height / 39.37) * (human.height / 39.37));
        return (weight*1.0 / (height/100.0 * height/100.0));
    }
    // ��������� ��� ��������
    short humanBD()
    {
        return (2024 - age);
    }
    // ����� ������� ���������� � ��������
    void humanInfo()
    {
        cout << "���: " << name << endl;
        cout << "�������: " << lastname << endl;
        cout << "�������: " << age << endl;
        cout << "���: " << weight << endl;
        cout << "����: " << height << endl;
    }
};

int main()
{
    Human m2;
    m2 = { "Alex", "Och", 49, 82, 183};

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    //cout << sizeof(Human) << endl;

    m2.humanInfo();
    cout << "��� ��������: " << m2.humanBD() << endl;
    cout << "��� ���: " << m2.imt() << endl;

    return 0;
}

