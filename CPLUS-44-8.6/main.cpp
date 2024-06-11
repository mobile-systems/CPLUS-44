#include <iostream>
using namespace std;

int main()
{
    int answer = 42;
    auto ask1() { return answer; };
    const auto& ask2() { return answer; }

    return 0;
}
