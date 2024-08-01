#include<iostream>

int getMax(int* arr, int n) // ������� ��� ���������� ������������� �������� �������
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countSort(int* arr, int n, int exp)
{
    int* output = new int[n];
    int count[10] = { 0 }; // �������� ������ ��� ������ ������ �������� 10, ��� ��� ���������� 10-���� ������� ���������

    // ���������� ������� �������� arr[i] ��������� ��������� 
    // (arr[i] / exp) % 10
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;  // ��������� �������� ������� � ������� ��� �������

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int* arr, int n)
{
    int m = getMax(arr, n); // ������� ������������ �����
    // ��������� ���������� �������, ���� �� ������ �� �������� ������� ����������� ����� 

    int exp = 1;
    // ��� ���
    for (int i = 0; i < n; i++)
        countSort(arr, n, exp++);
}

int main()
{
    int arr[] = { 80, 1, 451, 2000, 211, 71 };
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}