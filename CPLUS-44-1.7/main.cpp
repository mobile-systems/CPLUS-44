#include <iostream>
using namespace std; int main()
{
    int a = 78;
    int b = 53;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    /////////////////////////////////////
    a = 28;
    cout << "a << 1 = " << (a << 1) << endl; // 56
    cout << "a << 2 = " << (a << 2) << endl; // 112
    //////////////////////////////////////
    a = 28;
    cout << "a >> 1 = " << (a >> 1) << endl; // 14
    cout << "a >> 2 = " << (a >> 2) << endl; // 7
    /////////////////////////////////////////
    int num = 64;
    cout << "~35 = " << (~num) << " = " << (~num) << endl;
    cout << "~35 + 1 = " << (~num) + 1 << " = " << ((~num) + 1) << endl;


    return 0;
}