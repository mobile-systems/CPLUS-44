#include "mstring.h"

void swap(mstring& str1, mstring& str2)
{
    mstring temp = str1; // создаем копию объекта а 
    str1 = str2;
    str2 = temp;
}

void move_swap(mstring& a, mstring& b)
{
    mstring temp = move(a);
    a = move(b);
    b = move(temp);
}

int foo()
{
    return 42;
}

int& bar()
{
    static int i = 0;
    return i;
}

int main()
{
    mstring string1("string1");
    mstring string2("string2");
    swap(string1, string2);
    
    int a = foo(); // foo возвращает rvalue, можем присвоить значение переменной a
    cout << a << " " << foo() << "\n" << bar() << endl;
    bar() = 9; // bar() возвращает lvalue, можем присвоить значение
    cout << bar() << endl;
    //foo() = 9; // ошибка foo() возвращает rvalue

    mstring string11("string11");
    mstring string22("string22");
    move_swap(string11, string22);

    return 0;
}
