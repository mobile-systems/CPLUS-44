#include"List.h"
#include"Node.h"
#include<iostream>

int main(void)
{
    // создаем новый связанный список
    List* price = new List();
    price->push_back(12);
    price->push_back(3);
    price->push_back(101);
    price->push_back(99);
    price->push_back(105);

    std::cout << "Find routes: \n";
    price->show();

    return 0;
}
