
#include <iostream>
#include "Fruit.h"
//class Apple : public Fruit 
//{
//public:
//    Apple(int sugar) : Fruit(sugar) {         } 
//};
//
//int main() 
//{
//    setlocale(LC_ALL, "ru_RU");
//    Apple apple(10);
//    apple.Show();
//    return 0;
//}

class Apple : public Fruit
{
private:
	string _color;
public:
	Apple(int sugar, const string& color) : Fruit(sugar), _color(color) {         }
	void ShowColor() {
		cout << _color << " Apple " << endl;
	}
};

int main()
{
	Apple apple(10, "green");
	apple.Show();
	apple.ShowColor();
	return 0;
}
