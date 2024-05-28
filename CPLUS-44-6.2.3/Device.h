#pragma once

#include <iostream>
using namespace std;

class Device
{
public:
    Device(int batteryLife) : _batteryLife(batteryLife)
    {
    }
    void ShowSpec() {
        cout << "����� ������ ������������ ����������: " << _batteryLife << endl;
    }
private:
    // ����� ������ ������������ ����������
    int _batteryLife;
};
