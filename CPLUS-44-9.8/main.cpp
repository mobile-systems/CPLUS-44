#include "mstring.h"

void swap(mstring& str1, mstring& str2)
{
    mstring temp = str1; // создаем копию объекта а 
    str1 = str2;
    str2 = temp;
}

int main()
{
    mstring string1("string1");
    mstring string2("string2");
    swap(string1, string2);
    

    return 0;
}
