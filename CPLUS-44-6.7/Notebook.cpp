#include "Notebook.h"

Notebook::Notebook(int batteryLife, int weight, string display) : Device(batteryLife), Appliances(weight), _display(display)
{
}

void Notebook::ShowSpec()
{
    cout << "Заряд аккумулятора ноутбука, %: " << _batteryLife << endl;
    cout << "Вес ноутбука, кг: " << _weight << endl;
    cout << "Разрешение экрана максимальное: " << _display << endl;
}
