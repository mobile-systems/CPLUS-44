#include "Refrigerator.h"

Refrigerator::Refrigerator(int weight, int temperature) : Appliances(weight), _temperature(temperature)
{
}

void Refrigerator::ShowSpec()
{
    cout << "Вес холодильника, кг: " << _weight << endl;
    cout << "Температура холодильной камеры, гр.С: " << _temperature << endl;
}
