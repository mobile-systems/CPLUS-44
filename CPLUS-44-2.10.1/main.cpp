#include <iostream>
using namespace std;

int main()
{
	int count = 0;

	// выводит числа от 0 до 9 в столбик с помощью оператора goto
	setlocale(LC_ALL, "");

	stepNext:
		cout << "count = " << count << endl;
		count++;
		if (count <= 9)
			goto stepNext;

	return 0;
}