#include <iostream>
using namespace std;

bool subArraySum(int arr[], int n, int sum)
{
    // ваш код
    int i, j = 0;
    i = j;

    while (j < (n - 1))
    {
        int sumTarget = 0;
        i = j;
        while (i < (n - 1))
        {
            sumTarget += arr[i];

            if (sumTarget == sum)
            {
                std::cout << j << " " << i << "\n";
                return true;
            }
            i++;
        }
        j++;
    }
    std::cout << "-1\n";

    return false;
}

int main()
{
    //int arr[] = { 1, 4, 20, 3, 10, 5 };
    //subArraySum(arr, sizeof(arr), 33);
    int arr[] = { 1, 5, 3, 6, 5, 9 };
    subArraySum(arr, sizeof(arr), 6);
    return 0;
}