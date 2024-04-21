#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int count = 1;

	setlocale(LC_ALL, "");

	while (count <= 10)
	{
		x *= 2;
		cout << "x ^ count = 2 ^ " << count << " = " << x << endl;
		count++;
	}

	cout << "x ^ 10 = " << x << endl;

	return 0;
}