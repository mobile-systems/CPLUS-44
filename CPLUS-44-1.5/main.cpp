#include <iostream>
using namespace std;

#pragma runtime_checks( "", off )
#pragma warning( push )
#pragma warning( disable : 4700 )

int main()
{
	int i; // объявляем переменную i
	cout << i << endl; // выводим содержимое

	i = 1;  // присваиваем новое значение 1

	cout << i << endl; // выводим новое значение

	///////////////////////////////////////////////
	unsigned short a = 64000;
	a = a + 6000;
	cout << "\nunsigned short 64000 + 6000 = " << a;
	//////////////////////////////////////////////
	unsigned int smallNumber = 50;
	unsigned int bigNnumber = 100;
	unsigned int result = smallNumber - bigNnumber;
	cout << "\nunsigned int 50 - 100 = " << result;
	////////////////////////////////////////////
	unsigned short test1 = 32972;
	unsigned short test2 = 32565;
	unsigned short testResult = test1 + test2;
	cout << "\nunsigned short 32972 + 32565 = " << testResult << endl;
	////////////////////////////////////////////
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;

	return 0;
}
#pragma warning( pop )