#include <iostream>
using namespace std;
class BadHarmonicMean
{
private:
    float _val;
public:
    BadHarmonicMean(float val) : _val(val) {}
    void Show() { cout << "Harmonic mean exception " << _val << endl; }
};

float harmonic_mean(float arr[], int size)
{
    if (size == 0)
    {
        throw BadHarmonicMean(0.0);
    }
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0.0)
        {
            throw BadHarmonicMean(arr[i]);
        }
        sum = sum + 1.0 / arr[i];
    }

    if (sum < 0.0001 && sum > -0.0001)
    {
        throw BadHarmonicMean(sum);
    }
    return size / sum;
}

int main()
{
    float array1[2] = { 0.0, 0.0 };
    float array2[2] = { 1.5, -1.5 };
    float array3[2] = { 2.3, 0.5 };
    float hmean;

    try
    {
        hmean = harmonic_mean(array1, 2);
        cout << "hmean = " << hmean << endl;
    }
    catch (BadHarmonicMean& e)
    {
        e.Show();
    }

    try
    {
        hmean = harmonic_mean(array2, 2);
        cout << "hmean = " << hmean << endl;
    }
    catch (BadHarmonicMean& e)
    {
        e.Show();
    }

    try
    {
        hmean = harmonic_mean(array2, 0);
        cout << "hmean = " << hmean << endl;
    }
    catch (BadHarmonicMean& e)
    {
        e.Show();
    }

    try
    {
        hmean = harmonic_mean(array3, 2);
        cout << "hmean = " << hmean << endl;
    }
    catch (BadHarmonicMean& e)
    {
        e.Show();
    }

    return 0;
}