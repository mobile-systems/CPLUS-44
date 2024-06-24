#include <iostream>
#include <memory>

using namespace std;

class Int
{
public:
    Int(int i = 0) : _int(i) { cout << "constructor: " << _int << endl; } 
    ~Int() { cout << "destructor: " << _int << endl; }
    void SetInt(int i) { _int = i; cout << "Int set to: " << _int << endl; }
    int GetInt() { return _int; }
private:
    int _int;
}; 


void func(Int* i)
{
    shared_ptr<Int> ptr(i); // shared_ptr с счетчиком ссылок 1 удалит объект по завершению функции
    cout << ptr.use_count() << endl;
    cout << ptr->GetInt() << endl;
}

int main()
{
    shared_ptr<Int> ptr1 = make_shared<Int>(4);
    shared_ptr<Int> ptr2 = ptr1;
    cout << ptr2.use_count() << endl;
    func(ptr2.get());
    cout << ptr2.use_count() << endl; // указатель на объект (созданный в функции func) уже уничтожен

    return 0;	
}
