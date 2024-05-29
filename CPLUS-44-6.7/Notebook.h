#pragma once
#include"Device.h"
#include"Appliances.h"

class Notebook final : public Device, Appliances
{
public:
    Notebook(int batteryLife, int weight, string display);
    void ShowSpec() override;
private:
    // Разрешение экрана ноутбука
    string _display;
};
