#include "Washer.h"

Washer::Washer(int weight, int mode) : Appliances(weight), _mode(mode)
{
}

void Washer::ShowSpec()
{
    cout << "��� ��������, ��: " << _weight << endl;
    cout << "������ ������ ��������: ";
    if (_mode == 1) {
        cout << "������";
    }
    else {
        cout << "������ � ����� �����";
    }
    cout << endl;
}
