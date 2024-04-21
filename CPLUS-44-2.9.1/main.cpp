#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int count = 1;
	int sum = 0;
	// считает сумму чисел от 1 до 100, но останавливается, когда сумма станет больше 1000 и выводит полученную сумму.
	setlocale(LC_ALL, "");

	//for (count = 1; count < 100 ; count++)
	for (count = 1; count <= 100; ++count)
	{
		sum += count;
		if (sum > 1000)
			break;
	}

	cout << "sum= " << sum << " count= " << count << endl;

	return 0;
}