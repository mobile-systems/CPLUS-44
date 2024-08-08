//12.7.�������� �������
#include <iostream>
#include <string>
//#define DEBUG 1
using namespace std;

// ����� � ��������� ����� K
bool IsKPeriodic(char text[], int K)
{
    int i = 0; // ������� ��� ������
    int textCount[256] = {0}; // ������ ��� �������� ������������� ��������
    // ������� ���������� ��������
    while (i < (strlen(text)))
    {
        textCount[text[i]]++;
#ifdef DEBUG
        std::cout << "������: " << text[i] << " ";
#endif // DEBUG
        i++;
    }
    std::cout << "\n";
#ifdef DEBUG
    int j = 0; // ��� �������� �� ����� ������ ���������� ������� ������
    // ������� ������ �������� ������������� ��������
    for (size_t i = 0; i < 256; i++)
    {
        std::cout << textCount[i] << " "; // = 0;
        if (j == 31)
        {
            j = 0;
            std::cout << "\n";
        }
        else
        {
            j++;
        }
    }
    std::cout << "\n";
#endif // DEBUG
    int minFind = 0, // ����������� ���������� ���������� �������� (������� �� ����, ��������� ����������� ��������)
        avgFind = 0, // ������� ���������� ���������� ��������
        maxFind = 0; // ������������ ���������� ���������� �������� (������������� � �������� ��������)
    // ����� ���������� ��������� ��������
    for (i = 0; i < 256; i++)
    {
        if (textCount[i])
        {
            if (minFind > 0)
            {
                // ���� ��� - ��������� ����������� �������
                if(minFind > textCount[i])
                    minFind = textCount[i];
            }
            else
            {
                minFind = textCount[i];
            }
            if (maxFind > 0)
            {
                // ����� ������������� � �������� ��������
                if (maxFind < textCount[i])
                {
                    maxFind = textCount[i];
                }
            }
            else
            {
                maxFind = textCount[i];
            }
            std::cout << textCount[i] << " = " << (char)i << "\n";
        }
    }
    // ����� ���������� ������� ���������
    for (i = 0; i < 256; i++)
    {
        if (textCount[i])
        {
            if (avgFind > 0)
            {
                // ���� ��������� �������� (�� �������������) �������� ��������
                if ((minFind < textCount[i]) && (textCount[i] < maxFind))
                {
                    //maxFind = minFind;
                    avgFind = textCount[i];
                }
            }
            else
            {
                avgFind = textCount[i];
            }
        }
    }
    std::cout << "����������� ���������� ���������: " << minFind << ", ������� ���������� ���������: " << avgFind << " ������������ ���������� ��������� : " << maxFind << "\n";
    // ���������� ���������� � ��������� ���������
    if (avgFind > 0 && K == (strlen(text) / avgFind))
    {
        return true;
    } else
        return false;
}

int main()
{
    //char text[] = "abcabcabcabc";
    char text[] = "abcabczabcaabc"; // ������� ������
    int K = 3; // ��������� ���������
    //char text[] = "abcdefabcdef";
    //int K = 6;
    setlocale(LC_ALL, "rus");

    if(IsKPeriodic(text, K))
        std::cout << "��������� K: " << K << " �������������.\n";
    else
        std::cout << "��������� �� �������������.\n";

    return 0;
}
