/*
	������� 4.9.2
	�������� ������� processArray, ������� �������� � ����� �� ���� ��������� ������� � �� ������ �������� �������� ������� callback, 
	������� ��������� �� ���� ������� ������� ������� : void processArray(int* arr, int size, void (*callback)(int));
	����� �������� ��� ������� callback, ���� �� ������� ������� �� ������� ������� ������� ������� : void showElement(int e), 
	������ � ������ �������� ������� : void showElementMod(int e).
*/
#include <iostream>
using namespace std;

void showElement(int e)
{
    cout << e << " ";
}

void showElementMod(int e)
{
    if (e >= 0)
        cout << e << " ";
    else
        cout << (-e) << " ";
}

void processArray(int* arr, int size, void (*callback)(int))
{
    for (int i = 0; i < size; i++)
    {
        (*callback)(arr[i]);
    }
}

int main()
{
    // ������ ��� ������� :
    int arr[10] = { 0, 1, -6, 87, -4, -7, 9, 11, -34, 2 };

    bool showType = false;
    cout << "Show type:";
    cin >> showType;
    void (*outType)(int) = showType ? showElement : showElementMod;
    processArray(arr, 10, outType);
    
    return 0;
}