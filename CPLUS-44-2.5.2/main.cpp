#include <iostream>
using namespace std;

int main()
{
	int a, b;

	setlocale(LC_ALL, "");
	cout << "������� ��� ��������������� �����: ";
	cin >> a >> b;
	int max = a > b ? a : b;
		cout << "���������� �����: " << max;

	return 0;
}