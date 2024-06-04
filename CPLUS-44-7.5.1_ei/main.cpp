#include <iostream>
#include<exception>
using namespace std;

class Base
{
public:
    Base() {}
};
 
class Derived: public Base
{
public:
    Derived() {}
};
 
int main()
{
    try
    {
        throw Derived();
    }
    catch (const Base& base)
    {
        cout << "Exception: caught Base class" << endl;
    }
    catch (const Derived& derived)
    {
        cout << "Exception: caught Derived class" << endl;
    }
 
    return 0;
}
