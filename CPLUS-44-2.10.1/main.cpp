#include <iostream>
using namespace std;

int main()
{
	int count = 0;

	// ������� ����� �� 0 �� 9 � ������� � ������� ��������� goto
	setlocale(LC_ALL, "");

	stepNext:
		cout << "count = " << count << endl;
		count++;
		if (count <= 9)
			goto stepNext;

	return 0;
}