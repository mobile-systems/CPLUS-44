//12.7.�������� �������
#include <iostream>
#include <string>

using namespace std;
/*
            a b c a b c a b c a b c
i           0 1 2 3 4 5 6 7 8 9 1011
textCount   1 1 1 2 2 2 3 3 3 4 4 4
*/
// ����� ����� ����������
int IsKPeriodic(char text[], int K)
{
    int i = 0;
    int textCount[256] = {0}; // ������ ��� �������� ������������� ��������
    // ������� ���������� ����
    while (i < (strlen(text)))
    {
        textCount[text[i]]++;
        std::cout << "������: " << text[i] << " ";
        i++;
    }
    std::cout << "\n";
#ifdef DEBUG
    int j = 0;
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
    // ����������� � ������������ ���������� ���������� ��������
    int minFind = 0, maxFind = 0;
    // ����� ���������� ���������� ���������
    for (size_t i = 0; i < 256; i++)
    {
        if (textCount[i])
        {
            if (minFind)
            {
                // ���� ������ ���� � ������ minFind, �� ������������� ����� �������� maxFind
                if(minFind < textCount[i])
                    maxFind = textCount[i];
                // ���� ������ ���� � minFind > maxFind, �� ����� minFind � maxFind
                //if ((minFind > textCount[i]) && (minFind > maxFind))
                //{
                //    maxFind = minFind;
                //    minFind = textCount[i];
                //}
            }
            else
            {
                minFind = textCount[i];
            }
            if (maxFind)
            {
                // ���� ������ ���� � minFind > maxFind, �� ����� minFind � maxFind
                if ((minFind > textCount[i]) && (minFind > maxFind))
                {
                    maxFind = minFind;
                    minFind = textCount[i];
                }
                maxFind = minFind;
            }
            else
            {
                maxFind = textCount[i];
            }

            std::cout << textCount[i] << " = " << (char)i << "\n";
        }
    }
    std::cout << "����������� ���������� ���������: " << minFind << ", ������������ ���������� ��������� : " << maxFind << "\n";
    // ������� ���������� ����������
    if (minFind)
    {
        minFind = strlen(text) / minFind;
    } else
        minFind = 0;

    return minFind;
}

int main()
{
    //char text[] = "abcabcabcabcaaa";
    char text[] = "aabcaabcaabcaabc";
    //char text[] = "abcdef";
    int K = 3;
    setlocale(LC_ALL, "rus");

    int countK = IsKPeriodic(text, K);

    if(countK)
        std::cout << "������� ��������� K: " << countK << " ��������.\n";

    return 0;
}