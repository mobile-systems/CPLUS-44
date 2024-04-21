#include<iostream>
using namespace std;

int main()
{
	//int a = 9;
	//int b = 2;
	//int c = a + b; // c = 11
	//cout << "c = " << c << endl;
	///////////////////////////////
	//c = a - b; // c = 7
	//cout << "c = " << c << endl;
	///////////////////////////////
	//c = a * b; // c = 18
	//cout << "c = " << c << endl;
	///////////////////////////////
	//c = a / b; // c = 4
	//cout << "c = " << c << endl;
	///////////////////////////////
	//float _a = 9;
	//float _b = 2;
	//float _c = _a / _b;
	//cout << "c = " << _c << endl;
	///////////////////////////////
	//c = a % b; // c = 4
	//cout << "c = " << c << endl;
	//////////////////////////////
	setlocale(LC_ALL, ""); // или system("chcp 1251");
	float c = 0;
	float f = 0;
	cout << "Введите температуру по Цельсию: ";
	cin >> c;
	cout << "c = " << c << endl;
	f = c * 9 / 5 + 32;
	cout << "Температура по Фаренгейту = " << f << endl;
	//	1.6.4	////////////////////////////////////////
	int a = 10;
	++a;
	a -= 3;
	a %= 2;
	cout << "Результат операций: " << a << endl;
	return 0;
}