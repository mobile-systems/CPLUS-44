#include "Refrigerator.h"

Refrigerator::Refrigerator(int weight, int temperature) : Appliances(weight), _temperature(temperature)
{
}

void Refrigerator::ShowSpec()
{
    cout << "��� ������������, ��: " << _weight << endl;
    cout << "����������� ����������� ������, ��.�: " << _temperature << endl;
}
