#include "Mobile.h"

Mobile::Mobile(int batteryLife, int mcc) : Device(batteryLife), _mcc(mcc)
{
}

void Mobile::ShowSpec()
{
    cout << "����� ������� �������� ��������, %: " << _batteryLife << endl;
    cout << "�������� ������� �����: " << _mcc << endl;
}
