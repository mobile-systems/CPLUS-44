#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int count = 1;

	setlocale(LC_ALL, "");

	while (count <= 12)
	{
		x *= count;
		count++;
	}

	cout << count-1 << "! = " << x << endl;

	return 0;
}
