#include <iostream>
using namespace std;

    int answer = 42;
    auto ask1() { return answer; };
    const auto& ask2() { return answer; }

int main()
{
    std::cout<< ask1()<<std::endl;
    std::cout<< ask2()<<std::endl;

    return 0;
}
