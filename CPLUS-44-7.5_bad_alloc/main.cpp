#include <iostream>

using namespace std;
struct BigStruct
{
    double bugStuff[400000]; // массив 400000 * 8 = 3 200 000 байт
};

int main()
{
    BigStruct* bg;
    try
    {
        bg = new BigStruct[400000]; // попытка выделить 1192 Гб памяти
    }
    catch(bad_alloc& ba)
    {
        cout << "bad_alloc caught!" << endl;
        cout << ba.what() << endl;
    }
    
    return 0;
}
