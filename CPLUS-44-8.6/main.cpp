#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T1, typename T2> auto Add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

int main() {
    cout << Add(2, 3) << endl;     // Тип возвращаемого значения будет int
    cout << Add(2, 3L) << endl;    // Тип возвращаемого значения будет long
    cout << Add(2U, 3) << endl;    // Тип возвращаемого значения будет unsigned int
    cout << Add(2.2f, 3) << endl;  // Тип возвращаемого значения будет float

    auto sum1 = Add(2, 3);              
    cout << typeid(sum1).name() << endl;
    auto sum2 = Add(2, 3L);            
    cout << typeid(sum2).name() << endl;
    auto sum3 = Add(2U, 3);             
    cout << typeid(sum3).name() << endl;
    auto sum4 = Add(2.2f, 3);           
    cout << typeid(sum4).name() << endl;
    
    return 0;
}
