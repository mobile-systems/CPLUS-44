#include <iostream>
using namespace std;

int main()
{
	int day;

	setlocale(LC_ALL, "");

	cout << "������� ����� ��� ������: ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "�����������" << endl;
		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "�����" << endl;
		break;
	case 4:
		cout << "�������" << endl;
		break;
	case 5:
		cout << "�������" << endl;
		break;
	case 6:
		cout << "�������" << endl;
		break;
	case 7:
		cout << "�����������" << endl;
		break;
	default:
		cout << "���� ���� ������" << endl;
		break;
	}

	return 0;
}