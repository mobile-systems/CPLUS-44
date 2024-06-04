#include <iostream>
using namespace std;
struct DestructException
{
    
};

class Destruct
{
public:
    ~Destruct()
    {
        throw DestructException();
    }
};

struct FuncException
{
    
};

void Func()
{
    throw FuncException();
}

void Foo()
{
    Destruct d;
    Func();
}

int main()
{
    try
    {
        Foo();
    }
    catch(FuncException& exception)
    {
        cout << "FuncException caught"<< endl;
    }
    catch(DestructException& exception)
    {
        cout << "DestructException caught!" <<endl;
    }
    
    cout << "all exceptions handled" << endl;
    return 0;
}
