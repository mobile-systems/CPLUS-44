#pragma once
#include "Device.h"

class Foto final : public Device
{
public:
    Foto(int batteryLife, int lens);
    void ShowSpec() override;
private:
    // ��������� �������� ���������
    int _lens;
};
