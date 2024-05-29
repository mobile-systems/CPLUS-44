#pragma once
#include "Appliances.h"

class Washer final : public Appliances
{
public:
    Washer(int weight, int mode);
    void ShowSpec() override;
private:
    // Режим работы стиральной машины
    int _mode;
};
