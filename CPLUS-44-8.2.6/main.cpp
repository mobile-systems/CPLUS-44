#include <iostream>
using namespace std;

//Обычная функция:
template <typename T> void show(T a) {
    cout << "Значение аргумента функции равно " << a << endl;
}

int main() {
    setlocale(LC_ALL, "");
    
    int n = 5;
    show<int>(n);

    float d = 21.2987;
    show<float>(d);

    string s = "test";
    show<string>(s);
    
    return 0;
}
