#include <boost/core/demangle.hpp>
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
    cout << typeid( sum4 ).name() << endl;
    //cout << typeid(sum4).
    //cout << type_info::name sum4
    std::string real_name1 = boost::core::demangle(typeid(sum1).name());
    cout << real_name1 << endl;
    std::string real_name2 = boost::core::demangle(typeid(sum2).name());
    cout << real_name2 << endl;
    std::string real_name3 = boost::core::demangle(typeid(sum3).name());
    cout << real_name3 << endl;
    std::string real_name4 = boost::core::demangle(typeid(sum4).name());
    cout << real_name4 << endl;

    return 0;
}
