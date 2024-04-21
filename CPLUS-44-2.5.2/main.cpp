#include <iostream>
using namespace std;

int main()
{
	int a, b;

	setlocale(LC_ALL, "");
	cout << "Введите два неотрицательных числа: ";
	cin >> a >> b;
	int max = a > b ? a : b;
		cout << "Наибольшее число: " << max;

	return 0;
}