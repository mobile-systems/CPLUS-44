#include <iostream>
#include "binarytree.h"

int main()
{
    BinaryTree tree;
    
    //tree.setRoot(2); // задали корень
    tree.addInt(4); // добавляем узлы
    tree.addInt(0);
    tree.addInt(3);
    tree.addInt(1);
    tree.addInt(5);
    tree.addInt(6);
    std::cout << "Init print" << std::endl;
    //tree.print();
    tree.delInt(1); // удалили узел 1
    std::cout << "After del" << std::endl;
    //tree.print();
    return 0;
}
