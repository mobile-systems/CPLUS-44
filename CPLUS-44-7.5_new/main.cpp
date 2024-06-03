#include <iostream>
using namespace std;
// Что, если мы добавим в наш класс Divider массив, который будем динамически создавать в конструкторе:
class Divider
{
private:
    int _number;
    int* _cache;
    
public:
    Divider(int num) : _number(num)
    {
        cout << "allocating cache" << endl;
        _cache = new int[10];
        cout << "cache allocated" << endl;
        if (num == 0)
        {
            throw "Divider can not be 0!";
        }
    }
    
    ~Divider()
    {
        cout << "deleting cache" << endl;
        delete[] _cache;
        cout << "deleted cache" << endl;
        cout << "Divider destructed" << endl;
    }
};

int main()
{
    try
    {
        Divider d(0);
    }
    catch(const char* exception)
    {
        cout << "Exception caught: " << exception << endl;
    }
    
    
    return 0;
}