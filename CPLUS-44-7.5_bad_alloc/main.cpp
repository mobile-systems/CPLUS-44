#include <iostream>
using namespace std;

class Divider
{
private:
    int _number;
public:
    Divider(int num) : _number(num)
    {
        if (num == 0)
        {
            throw "Divider can not be 0!";
        }
    }
    
    ~Divider()
    {
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