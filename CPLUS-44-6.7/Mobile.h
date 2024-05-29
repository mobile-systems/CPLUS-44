#pragma once
#include "Device.h"

class Mobile final : public Device
{
public:
    Mobile(int batteryLife, int mcc);
    void ShowSpec() override;
private:
    // Оператор сотовой связи
    int _mcc; // MCC + MNC
    // 250	01	MTS
    // 250	02	MegaFon
    // 250	11	Yota
    // 250	20	Tele2
};
