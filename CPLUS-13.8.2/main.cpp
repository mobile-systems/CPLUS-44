#include"tree.h"

int main()
{
    Tree tree;
    
    tree.setRoot(2); // задали корень
    tree.addNode(2,4); // добавляем узлы
    tree.addNode(2,0);
    tree.addNode(2,3);
    tree.addNode(4,1);
    tree.addNode(1,5);
    tree.addNode(1,6);
    std::cout << "Init print" << std::endl;
    tree.print();
    tree.delNode(4); // удалили узел 4
    std::cout << "After del" << std::endl;
    tree.print();
    return 0;
}
