#include "Washer.h"

Washer::Washer(int weight, int mode) : Appliances(weight), _mode(mode)
{
}

void Washer::ShowSpec()
{
    cout << "Вес стиралки, кг: " << _weight << endl;
    cout << "Режимы работы стиралки: ";
    if (_mode == 1) {
        cout << "стирка";
    }
    else {
        cout << "стирка и сушка белья";
    }
    cout << endl;
}
