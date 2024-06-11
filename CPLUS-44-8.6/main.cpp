#include <iostream>

using namespace std;
template<typename T1, typename T2> auto Add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

int main() {
    Add(2, 3);     // Тип возвращаемого значения будет int
    Add(2, 3L);    // Тип возвращаемого значения будет long
    Add(2U, 3);    // Тип возвращаемого значения будет unsigned int
    Add(2.2f, 3);  // Тип возвращаемого значения будет float
    return 0;
}
