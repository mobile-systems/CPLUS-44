#include <boost/core/demangle.hpp>
#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T1, typename T2> auto Add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}
template<typename T> void print_type_name(T x) {
    //typeid(x).name();
    cout << boost::core::demangle(typeid(x).name()) << endl;
}

auto main() -> int {

    auto a = 42;
    //cout << typeid(a).name() << endl;
    print_type_name(a);
    auto b = true;
    //cout << typeid(b).name() << endl;
    print_type_name(b);
    auto c = 'A';
    //cout << typeid(c).name() << endl;
    print_type_name(c);
    auto s = "строка";
    //cout << typeid(s).name() << endl;
    print_type_name<string>(s);
    auto f = 5.2;
    //cout << typeid(f).name() << endl;
    print_type_name(f);
    const auto* pa = &a;
    //cout << typeid(pa).name() << endl;
    print_type_name(pa);
    auto sum = 2L + 4U;
    //cout << typeid(sum).name() << endl;
    print_type_name(sum);

    return 0;
}
