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
        cout << "Время работы аккумулятора устройства: " << _batteryLife << endl;
    }
private:
    // Время работы аккумулятора устройства
    int _batteryLife;
};
