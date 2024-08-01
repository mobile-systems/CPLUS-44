// 11.6.������ � �������
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

//int main()
//{
//    string filename = "C://Users/alexa/filename.txt";
//    fstream fs;
//
//    fs.open(filename);
//    // ��������� ��� ���� ������� ������
//    if (fs.is_open())
//    {
//        std::cout << "OK open file\n";
//        // ���������� �������� � ������
//        fs.close(); // ��������� ����
//    }
//    else
//        std::cout << "Error open file\n";
//
//    return 0;
//}

#include <string>
#include <fstream>  // ������ � �������
#include <iostream>
#include <cstdlib> // ��� ��������� ��������� �����
#include <ctime>
#include <chrono> // ��� ��������� �������

using namespace std;

void write_arr(const string& filename, const int* arr, const int n)
{
    fstream fs;

    fs.open(filename, fstream::out);
    if (fs.is_open()) // ���������, ��� ���� ������� ������
    {
        fs << n << '\n';  // ���������� ������ �������
        for (int i = 0; i < n; i++)
            fs << arr[i] << ' '; // ���������� �������� ����� ������
        fs << '\n';

        fs.close(); // ��������� ����
    }
}

void read_arr(const string& filename, int*& arr, int& n)
{
    fstream fs;

    fs.open(filename, fstream::in);
    if (fs.is_open()) // ���������, ��� ���� ������� ������
    {
        fs >> n;  // ������ ������ �������
        arr = new int[n];
        for (int i = 0; i < n; i++)
            fs >> arr[i]; // ������ �� ����� �������������� ������� - ������ � ������� ������

        fs.close(); // ��������� ����
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int*& arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int*& arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//int main()
//{
//    string filename = "array_data.txt";
//    const int size = 100;
//    int* rand_arr = new int[size];
//
//    srand(time(nullptr)); // ���������� ������� �����, ����� ������������� ��������� ��������
//    int lef_border = 5;
//    int range_len = 10; // ������ ������� = range_len + left_border
//    for (int i = 0; i < size; i++)
//        rand_arr[i] = lef_border + rand() % range_len; // ���������� ����� � ��������� ��������� � ���������� � ������
//
//    write_arr(filename, rand_arr, size); // ���������� ������ � ����
//
//    int* array_from_file = nullptr;
//    int n = 0;
//    read_arr(filename, array_from_file, n); // ������ ������ �� �����
//
//    delete[] rand_arr;
//    delete[] array_from_file;
//    return 0;
//}
int main()
{
    string filename = "array_data.txt";
    const int size = 500000;
    int* rand_arr = new int[size];

    srand(time(nullptr)); // ���������� ������� �����, ����� ������������� ��������� ��������
    int lef_border = 5;
    int range_len = 1000; // ������ ������� = range_len + left_border
    for (int i = 0; i < size; i++)
        rand_arr[i] = lef_border + rand() % range_len; // ���������� ����� � ��������� ��������� � ���������� � ������

    write_arr(filename, rand_arr, size); // ���������� ������ � ����

    int* array_from_file = nullptr;
    int n = 0;
    read_arr(filename, array_from_file, n); // ������ ������ �� �����

    auto start = chrono::high_resolution_clock::now(); // ��������� ����� ������ ������ ���������
    quickSort(array_from_file, 0, n); // ��������� ����������
    auto finish = chrono::high_resolution_clock::now(); // ��������� ����� ����� ������ ���������
    chrono::duration<double> elapsed = finish - start;
    cout << "Elapsed time: " << elapsed.count() << " sec" << endl; // ��������� ����������������� ������ � ���. � ������� �� �����

    delete[] rand_arr;
    delete[] array_from_file;
    return 0;
}
