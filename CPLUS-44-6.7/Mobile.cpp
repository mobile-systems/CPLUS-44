#include "Mobile.h"

Mobile::Mobile(int batteryLife, int mcc) : Device(batteryLife), _mcc(mcc)
{
}

void Mobile::ShowSpec()
{
    cout << "Заряд батареи сотового телефона, %: " << _batteryLife << endl;
    cout << "Оператор сотовой связи: " << _mcc << endl;
}
