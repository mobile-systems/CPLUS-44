//#include <iostream>
//using namespace std;
//
//void foo()
//{
//    int static i = 0; // ������������������ ����������� ����������
//    i++;
//    cout << i << endl;
//
//};
//
//int main()
//{
//    foo(); // �� ������� �������� 1
//    foo(); // �� ������� �������� 2, ��� ��� ���������� ����� foo ��� ������� �������� �� 1
//}
#include <iostream>
using namespace std;

int globalValue; // �������������������� ���������� ���������� 

int main()
{
    cout << ++globalValue << endl; // globalValue = 0
    return 0;
}