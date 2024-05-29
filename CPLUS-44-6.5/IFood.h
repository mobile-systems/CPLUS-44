#pragma once
#include <iostream>
#include <string>
using namespace std;

class IFood
{
public:
    virtual void Show() = 0;
    virtual ~IFood() = default;
};
