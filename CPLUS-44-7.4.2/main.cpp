#include <iostream>
#include <typeinfo> // заголовочный файл, где объявлен bad_cast
using namespace std;

struct Foo { virtual ~Foo() {} };
struct Bar { virtual ~Bar() {} };
 // Раздел 7.4.1
int main()
{
    Bar b;
    try
    {
        Foo& f = dynamic_cast<Foo&>(b);
    }
    catch(const bad_cast& e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
