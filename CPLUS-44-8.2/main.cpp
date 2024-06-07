#include <iostream>
using namespace std;
template<typename T> T Add(T a, T b) {
    T sum;
    sum = a + b;
    return sum;
}
 
int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
 
    int x = 3;
    int y = 6;
    cout << "Сложение целых чисел " << x << " и " << y << " равно " << Add<int>(x, y) << endl;
 
    float a = 2.5;
    float b = 3.7;
    cout << "Сложение вещественных чисел " << a << " и " << b << " равно " << Add<float>(a, b) << endl;
 
    cout << "Сложение строк " << "Hello " << " и " << "World!" << " равно " << Add<string>("Hello ", "World!") << endl;
 
 
    return 0;
}