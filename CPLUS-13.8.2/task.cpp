#include "../headers/binarytree.h"
#include <iostream>
// поиск, возвращает указатель на найденный элемент
BinaryTree::Node* BinaryTree::findNodeByData(int finddata) {
        Node* current = root; // начинаем с корня
        Node* newNode = nullptr;
        while(newNode == nullptr) {
            if (current->data == finddata) {
                // если элемент равен текущему, заканчиваем поиск
                std::cout << "Data: " << current->data << "\n";
                newNode = newNode;
                return newNode;
            } else if (current->data > finddata) {
                // если элемент меньше текущего, идем влево
                if(current->leftChild != nullptr) {
                    current = current->leftChild;
                    continue;
                }
                return nullptr;
            } else {
                // если элемент меньше текущего, идем вправо
                if (current->rightChild != nullptr) {
                    current = current->rightChild;
                    continue;
                }
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
        return;
    }
    if(isLeaf(delNode)) // Если удаляем листок
    {
        if(delNode->parent->leftChild == delNode)
        {
            delNode->parent->leftChild = nullptr;
        }
        if(delNode->parent->rightChild == delNode)
        {
            delNode->parent->rightChild = nullptr;
        }
        delete delNode;
        return;
    }
    if(delNode->leftChild != nullptr && delNode->rightChild == nullptr)
    {
        // Если есть только левая дочерняя вершина
        delNode->leftChild->parent = delNode->parent;
        delete delNode;
        return;
    }
    if(delNode->leftChild == nullptr && delNode->rightChild != nullptr)
    {
        // Если есть только правая дочерняя вершина
        delNode->rightChild->parent = delNode->parent;
        delete delNode;
        return;
    }
    // Если две дочернии вершины :-o
    int findData = delNode->data;
    // Переходим в левую ветку...
    Node    *findNode = nullptr, 
            *nextNode = delNode->leftChild;
    // ... и идём к самому правому узлу левой ветки
    while(nextNode != nullptr)
    {
        findData = nextNode->data;
        findNode = nextNode;
        nextNode = nextNode->rightChild;
    }
    if(findData < delNode->data)
    {
        //delNode->parent->rightChild = delNode->rightChild;
        delNode->parent->rightChild = findNode;
        findNode->rightChild = delNode->rightChild;
        findNode->leftChild = delNode->leftChild;
        findNode->parent = delNode->parent;
        delNode->leftChild->parent = findNode;
        delNode->rightChild->parent = findNode;
        //delNode->parent->leftChild == findNode
    }
    // завершаем работу
    return;

}
