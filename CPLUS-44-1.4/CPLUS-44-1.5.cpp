#include <iostream>
using namespace std;
#pragma runtime_checks( "", off )#pragma warning( push )
#pragma warning( disable : 4700 )

int main()
{
	int i; // ��������� ���������� i
	cout << i << endl; // ������� ����������

	i = 1;  // ����������� ����� �������� 1

	cout << i << endl; // ������� ����� ��������

	return 0;
}
#pragma warning( pop )