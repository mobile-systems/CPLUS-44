#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
    //setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "");
    if (argc != 3)
    {
        cout << "������� �������� ����������� F ��� C � ��������!" << endl;
        return 1;
    }
    float c = atof(argv[1]);
    float f = atof(argv[2]);
    float result = c * f;
    cout << "���������: " << result << endl;
    return 0;
}
