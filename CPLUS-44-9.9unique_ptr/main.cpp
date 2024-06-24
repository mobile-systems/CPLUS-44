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

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    unique_ptr<Int> ptr( new Int(2));
    (*ptr).SetInt(1);
    cout << "object value: "<< ptr->GetInt() << endl;
	
    unique_ptr<Int> ptr2 = move(ptr); // передали объект Int указателю ptr2
	
    cout << "ptr2 value: " << ptr2->GetInt() << endl;
    cout << (ptr == nullptr) << endl; // ptr теперь равен nullptr
    return 0;
}


