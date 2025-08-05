#include <iostream>

using namespace std;


int main(){
    {
        setlocale(LC_ALL, "ru_RU.UTF-8");

        cout << "Must be destroyed here" << endl;
    }
    
    cout << "program end" << endl;
    return 0;
}
