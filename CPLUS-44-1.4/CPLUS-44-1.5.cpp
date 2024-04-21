#include <iostream>
using namespace std;
#pragma runtime_checks( "", off )#pragma warning( push )
#pragma warning( disable : 4700 )

int main()
{
	int i; // объявляем переменную i
	cout << i << endl; // выводим содержимое

	i = 1;  // присваиваем новое значение 1

	cout << i << endl; // выводим новое значение

	return 0;
}
#pragma warning( pop )