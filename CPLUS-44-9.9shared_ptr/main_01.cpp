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

    shared_ptr<Int> p1(new Int(4)); 
    cout << p1.get() << endl; 
    p1->GetInt(); 
    shared_ptr<Int> p2(p1); 
    p2->GetInt(); 
    cout << p1.get() << endl; // оба умных указателя указывают
    cout << p2.get() << endl; //  на один и тот же адрес, то есть один объект

    cout << p1.use_count() << endl; // счетчик ссылок
    cout << p2.use_count() << endl; 
  
    p1.reset(); // сбрасываем указатель p1
    cout << p1.get() << endl; // теперь p1 указывает на nullptr
    cout << p2.use_count() << endl; // счетчик ссылок теперь равен 1 после сброса одного указателя
    cout << p2.get() << endl; // p2 указывает на тот же объект
  
    return 0; 
} 
