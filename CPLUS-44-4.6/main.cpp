// 4.6.�������� �������� � �������

// �������� �� ��������
//#include <iostream>
//using namespace std;
//
//int foo(int a)
//{
//    return a + 1;
//}
//
//int main()
//{
//    int x = 1;
//    int y = foo(x);
//
//    cout << "x = " << x << endl; // x = 1
//    cout << "y = " << y << endl; // y = 2
//    return 0;
//}

// �������� �� ���������
//#include <iostream>
//using namespace std;
//
//void bar(int* a)
//{
//    *a = 5;
//}
//
//int main()
//{
//    int x = 6;
//    bar(&x); // �������� ��������� �� ���������� � ������� �������� ������ ������
//
//    int* y = new int(1);
//    bar(y); // �������� ��������� �� ���������� y
//    cout << x << endl;
//    cout << *y << endl;
//    delete y;
//    return 0;
//}

// ��������� �� ���������
//#include <iostream>
//using namespace std;
//
//void changePointer(int** p, int* val)
//{
//    *p = val;
//}
//
//int main()
//{
//    int a = 6;
//    int* pa = &a;
//
//    int b = 9;
//    changePointer(&pa, &b);
//    cout << a << endl; // �������� a �� ����������
//    cout << *pa; // pa ��������� �� b - ����� �������� 9
//
//    return 0;
//}

// �������� ��������
#include <iostream>
using namespace std; int sumArray(int* a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int array[5] = { 0,1,2,3,4 };

    int sum = sumArray(array, 5);

    cout << sum;

    return 0;
}
