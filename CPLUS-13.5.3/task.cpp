#include "graph.h"
// ����� ���������� �����
int Graph::findPathCount(int from, int to) {
    // ��� ��� ������ ���� ����� 
    routes = 0;
    bool visited[SIZE]; // ������ ���������� ������
    for (int i = 0; i < SIZE; i++)
        visited[i] = false; // �������������� ��� ������������

    //for (int pass = from; pass++; pass < to)
    {
        //std::cout << "v" << current << " -> "; // ����� �������
        //visited[pass]= true; // �������� ��� ����������
        //for (int i = 0; i < SIZE; i++)
        //{
            //if(edgeExists(pass,i) && !visited[i])
            depthInner(from, to, visited); // ���� ���������� ����� � ������� �� ����������, 
            //�� ������� �� ���� � ������� �������
            //depthInner(from, to, visited); // ���� ���������� ����� � ������� �� ����������, 
        //}
    }
    return routes;
}
void Graph::depthInner(int from, int to, bool visited[])
{
    visited[from] = true; // �������� ��� ����������
    if (from == to)
    {
        std::cout << "v" << from << "\n"; // ����� �������
        //visited[from] = false; // �������� ��� ����������
        routes += 1;
        exit;
    }
    else
    {
        std::cout << "v" << from << " -> "; // ����� �������
        //visited[from] = true; // �������� ��� ����������
        for (int i = 0; i < SIZE; i++)
        {
            if (edgeExists(from, i) && !visited[i])
                depthInner(i, to, visited); // ���� ���������� ����� � ������� �� ����������,
            // �� ������� �� ���� � ������� �������
        }
    }
    return;
}
