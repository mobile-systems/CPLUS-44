#include "Foto.h"

Foto::Foto(int batteryLife, int lens) : Device(batteryLife), _lens(lens)
{
}

void Foto::ShowSpec()
{
    cout << "����� ������������ ������������, %: " << _batteryLife << endl;
    cout << "��������� ���������, ��: " << _lens << endl;
}
