#include "Foto.h"

Foto::Foto(int batteryLife, int lens) : Device(batteryLife), _lens(lens)
{
}

void Foto::ShowSpec()
{
    cout << "Заряд аккумулятора фотоаппарата, %: " << _batteryLife << endl;
    cout << "Параметры объектива, мм: " << _lens << endl;
}
