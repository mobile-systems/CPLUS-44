#include "Notebook.h"

Notebook::Notebook(int batteryLife, int weight, string display) : Device(batteryLife), Appliances(weight), _display(display)
{
}

void Notebook::ShowSpec()
{
    cout << "����� ������������ ��������, %: " << _batteryLife << endl;
    cout << "��� ��������, ��: " << _weight << endl;
    cout << "���������� ������ ������������: " << _display << endl;
}
