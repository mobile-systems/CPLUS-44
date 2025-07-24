//#include "../headers/binarytree.h"
#include "binarytree.h"
#include <iostream>
// поиск, возвращает указатель на найденный элемент
BinaryTree::Node* BinaryTree::findNodeByData(int finddata) {
        Node* current = root; // начинаем с корня
        Node* findNode = nullptr;
        while(findNode == nullptr) {
            if (current->data == finddata) {
                // если элемент равен текущему, заканчиваем поиск
                std::cout << "Data: " << current->data << " @ ";
                findNode = current; //findNode;
                // Дошли до конца ветки, узел найден!
                std::cout << "FindData: " << finddata << ". Узел найден!\n";
                return findNode;
            } else if (current->data > finddata) {
                // если элемент меньше текущего, идем влево
                std::cout << "FindData: " << finddata << " меньше текущего: " << current->data << ", идём влево" << "\n";
                if(current->leftChild != nullptr) {
                    current = current->leftChild;
                    continue;
                }
                // Дошли до конца левой ветки, но ничего не найдено
                std::cout << "FindData: " << finddata << ". Ничего не найдено!\n";
                return nullptr;
            } else {
                // если элемент больше текущего, идем вправо
                std::cout << "FindData: " << finddata << " больше текущего: " << current->data << ", идём вправо" << "\n";
                if (current->rightChild != nullptr) {
                    current = current->rightChild;
                    continue;
                }
                // Дошли до конца правой ветки, но ничего не найдено
                std::cout << "FindData: " << finddata << ". Ничего не найдено!\n";
                return nullptr;
            }
        }
    return nullptr;
}
// удаление элемента
void BinaryTree::delInt(int deldata) {
    Node* delNode = findNodeByData(deldata);
    if(delNode == nullptr) // Нечего удалять
        return;
    if(isRoot(delNode)) // Если корневая вершина?
    {
        std::cout << "Удаляем корневую вершину, пока не реализовано\n";
        //return;
    }
    if(isLeaf(delNode)) // Если удаляем листок
    {
        if(delNode->parent->leftChild == delNode)
        {
            std::cout << "Удаляем левый листок\n";
            delNode->parent->leftChild = nullptr;
        }
        if(delNode->parent->rightChild == delNode)
        {
            std::cout << "Удаляем правый листок\n";
            delNode->parent->rightChild = nullptr;
        }
        delete delNode;
        return;
    }
    if(delNode->leftChild != nullptr && delNode->rightChild == nullptr)
    {
        // Если есть только левая дочерняя вершина
        std::cout << "Удаляем, если есть только левая дочерняя вершина\n";
        delNode->leftChild->parent = delNode->parent;
        delNode->parent->leftChild = delNode->leftChild;
        delete delNode;
        return;
    }
    if(delNode->leftChild == nullptr && delNode->rightChild != nullptr)
    {
        // Если есть только правая дочерняя вершина
        std::cout << "Удаляем, если есть только правая дочерняя вершина\n";
        delNode->rightChild->parent = delNode->parent;
        delNode->parent->rightChild = delNode->rightChild;
        delete delNode;
        return;
    }
    // Если две дочернии вершины :-o
   if (delNode->leftChild != nullptr && delNode->rightChild != nullptr)
    {
        std::cout << "Узел " << delNode << " имеет оба дочерних элемента, левый: " << delNode->leftChild << " и правый: " << delNode->rightChild << std::endl;
        Node* mostLeftChild = delNode->leftChild;
        Node* mostLeftParent = delNode;

        while (mostLeftChild->rightChild != nullptr)
        {
            mostLeftParent = mostLeftChild;
            mostLeftChild = mostLeftChild->rightChild;
        }

        delNode->data = mostLeftChild->data;
        delNode = mostLeftChild;

        if (mostLeftParent->leftChild == mostLeftChild)
            mostLeftParent->leftChild = nullptr;
        else
            mostLeftParent->rightChild = mostLeftChild->rightChild;
        return;
    }

}
