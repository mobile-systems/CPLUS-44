#pragma once
#include <iostream>

#ifndef __TREE_H_
#define __TREE_H_

//#include "test.h"
#define SIZE 10

class Tree { // класс дерева
    public:
        struct Node { // структура узла
            Node(int _number, Node* _parent = nullptr);
            ~Node();
            
            int number; // номер мершины
            
            Node* parent; // родительская вершина
            Node* children[SIZE]; // список дочерних вершин
            int childCount; // количество детей
            
            void addChild(Node* newChild);
            void delChild(Node* child);
            
            void dummy(void* param);
        };
        Tree();
        ~Tree();
    
        void setRoot(int number);
        void addNode(int parentNumber, int newNodeNumber);
        
        void delNode(int nodeNumber);
        void dummy(int nodeNumber);
        void print();
        
        //friend Table print(Tree& tree);
    
    private:
        Node* getNodeByNumber(int number, Node* current);
        Node* root;
        void printInner(Node *current);
};
#endif