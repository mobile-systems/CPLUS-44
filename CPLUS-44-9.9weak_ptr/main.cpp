#include <iostream>
#include <memory>

using namespace std;
class B;
class A
{
public:
    shared_ptr<B> ptr;
    ~A() {cout << "A destroyed" << endl;}
};

class B
{
public:
    shared_ptr<A> ptr;
    ~B() {cout << "B destroyed" << endl;}
};

int main(){
    {
        setlocale(LC_ALL, "ru_RU.UTF-8");

        shared_ptr<A> Aptr = make_shared<A>();
        shared_ptr<B> Bptr = make_shared<B>();
        Aptr->ptr = Bptr;
        Bptr->ptr = Aptr;
        cout << "Must be destroyed here" << endl;
    }
    
    cout << "program end" << endl;
    return 0;
}
