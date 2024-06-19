#include "mstring.h"

void swap(mstring& str1, mstring& str2)
{
    mstring temp = str1; // создаем копию объекта а 
    str1 = str2;
    str2 = temp;
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
    return 0;
}
