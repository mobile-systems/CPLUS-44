#include <iostream>
#include "binarytree.h"

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    BinaryTree tree;
    
    //tree.setRoot(2); // задали корень
    tree.addInt(5); // добавляем узлы
    tree.addInt(4);
    tree.addInt(-17);
    tree.addInt(20);
    tree.addInt(13);
    tree.addInt(43);
    tree.addInt(11);
    tree.addInt(18);
    tree.addInt(15);
    tree.addInt(19);
    tree.addInt(45);
    std::cout << "Init print" << std::endl;
    //tree.print();
    tree.delInt(20); // удалили узел 1
    std::cout << "After del" << std::endl;
    //tree.print();
    return 0;
}
