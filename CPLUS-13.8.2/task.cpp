//#include "../headers/binarytree.h"
#include "binarytree.h"
#include <iostream>
// поиск, возвращает указатель на найденный элемент
BinaryTree::Node* BinaryTree::findNodeByData(int finddata) {
        Node* current = root; // начинаем с корня
        Node* newNode = nullptr;
        while(newNode == nullptr) {
            if (current->data == finddata) {
                // если элемент равен текущему, заканчиваем поиск
                std::cout << "Data: " << current->data << " @ ";
                newNode = current; //newNode;
                return newNode;
            } else if (current->data > finddata) {
                // если элемент меньше текущего, идем влево
                std::cout << "FindData: " << finddata << " меньше текущего: " << current->data << ", идём влево" << "\n";
                if(current->leftChild != nullptr) {
                    current = current->leftChild;
                    continue;
                }
                continue; //return nullptr;
            } else {
                // если элемент меньше текущего, идем вправо
                std::cout << "FindData: " << finddata << " больше текущего: " << current->data << ", идём вправо" << "\n";
                if (current->rightChild != nullptr) {
                    current = current->rightChild;
                    continue;
                }
                continue; //return nullptr;
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
        return;
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
    int findData = delNode->data;
    // Переходим в левую ветку...
    Node    *findNode = nullptr, 
            *nextNode = delNode->leftChild;
    std::cout << "Переходим к левой ветке: " << nextNode->data << "\n";
    // ... и идём к самому правому узлу левой ветки
    while(nextNode != nullptr)
    {
        findData = nextNode->data;
        findNode = nextNode;
        nextNode = nextNode->rightChild;
    }
    std::cout << "Переходим к самому правому узлу левой ветки: " << findNode->data << "\n";
    if(findNode->data < delNode->data)
    {
        std::cout << "Подготовка к удалению узла\n";
        //delNode->parent->rightChild = delNode->rightChild;
        delNode->parent->rightChild = findNode;
        findNode->rightChild = delNode->rightChild;
        findNode->leftChild = delNode->leftChild;
        findNode->parent = delNode->parent;
        delNode->leftChild->parent = findNode;
        delNode->rightChild->parent = findNode;
        //delNode->parent->leftChild == findNode
        std::cout << "Удаление узла\n";
    }
    // завершаем работу
    return;

}
