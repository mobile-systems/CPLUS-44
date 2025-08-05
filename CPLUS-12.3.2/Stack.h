#include "Node.h"

class Stack
{
private:
    Node* m_root = nullptr;
public:
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
