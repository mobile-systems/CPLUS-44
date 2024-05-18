#include <iostream>
using namespace std;
/*
    ������� 5.4.1.
    ���������� ��� ���������������� ��� Human � �������������� ������.
*/
class Human
{
private:
    const char* name;
    const char* lastname;
    short age = 0;
    short weight;
    short height;
public:
    // ������� ������������
    void createUsers(const char* n, const char* ln, short a, short w, short h)
    {
        name = n;
        lastname = ln;
        age = a;
        weight = w;
        height = h;
    }
    // ������ ���
    double imt()
    {
        //cout << "��� ���: " << (h.weight / 2.205) / ((h.height / 39.37) * (h.height / 39.37)) << endl;
        return (weight * 1.0 / (height / 100.0 * height / 100.0));
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
    m2.createUsers("Alex", "Och", 49, 82, 183);

    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");

    m2.humanInfo();
    //m2.age = 40;
    cout << "��� ��������: " << m2.humanBD() << endl;
    cout << "��� ���: " << m2.imt() << endl;

    return 0;
}
