#pragma once
#include "Appliances.h"

class Refrigerator final : public Appliances
{
public:
    Refrigerator(int weight, int temperature);
    void ShowSpec() override;
private:
    int _temperature;
};
