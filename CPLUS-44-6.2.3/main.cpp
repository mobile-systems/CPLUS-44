
#include <iostream>
#include "Device.h"

class Apple : public Device
{
private:
	string _color;
public:
	Apple(int sugar, const string& color) : Device(sugar), _color(color) {         }
	void ShowColor() {
		cout << _color << " Apple " << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru_RU");
	Apple apple(10, "green");
	apple.ShowSpec();
	apple.ShowColor();
	return 0;
}
