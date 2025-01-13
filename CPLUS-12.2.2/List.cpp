#include "List.h"
#include <iostream>
using namespace std;

void List::push_back(int data)
{
    // ������� ����� ����
    Node* node = new Node(data);
    // ���� ������ ����, ���������� ����
    if (m_head == nullptr)
    {
        m_head = node;
        return;
    }
    // � ����� ���� ��������� ������� ������
    Node* last = m_head;
    while (last->m_next != nullptr)
    {
        last = last->m_next;
    }
    // ��������� ��������� next ���������� ���� �� ��������� �� ����� ����
    last->m_next = node;
    return;
}

void List::push_front(int data)
{
    Node* node = new Node(data);
    node->m_next = m_head;
    m_head = node;
}

void List::insert(int pos, int data)
{
    // ������� ����� ���� 
    Node* newNode = new Node(data);
    if (m_head == nullptr)
    {
        // ���� ������ ����, ����� ���� � ����� ������� ������
        m_head = newNode;
        return;
    }

    if (pos == 0)
    {
        // ������� ������ - �������  � ������ ������
        newNode->m_next = m_head;
        m_head = newNode;
        return;
    }

    int currPos = 0;

    Node* current = m_head;
    // � ����� ���� �� ������, ���� ������ �� ��������, ��� ���� �� ������ �� �������
    while (currPos < pos - 1 && current->m_next != nullptr)
    {
        current = current->m_next;
        currPos++;
    }
    // ������ ��������� �� ��������� ���� �� ��������� �� ����� ����
    Node* next = current->m_next;
    current->m_next = newNode;
    // ��������� ������ �������, ������ ��������� �� ����, ��������� ����� ������ ����, �� ��������� �� ����, ��������� �� current
    newNode->m_next = next;
}

void List::show()
{
    Node* current = m_head;

    while (current != nullptr)
    {
        std::cout << current->m_data;
        current = current->m_next;
    }
}

// ������� ���������� ������ ��� �������� ���� �� �������
void List::deleteNode(int position)
{
    // ��� ���
    Node* temp = m_head;
    Node* prev = nullptr;
    // ������� ������ �������� ������ ������
    if (temp  && position == 0) 
    { 
        m_head = temp->m_next;
        delete temp;           
        return; 
    }

    // ���� �� ������, ���� �� ������ ���� � ��������, ������ ��������
    int count = 0;
    while (temp && position != count) 
    { 
        prev = temp; 
        temp = temp->m_next; 
        count++;
    } 
    // ���� ���� �� ������, ����������
    if (!temp) 
        return; 
    // ������ ��������� ���������� ���� ��� ����������� ���� �� ����, ��������� �� ��������� �����, � ������� ���� � �������
    prev->m_next = temp->m_next; 
    delete temp; 
}
