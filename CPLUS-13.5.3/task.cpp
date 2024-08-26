#include "graph.h"
// ����� ���������� �����
int Graph::findPathCount(int from, int to) {
    // ��� ��� ������ ���� ����� 
    int routes = 0;
    bool visited[SIZE]; // ������ ���������� ������
    for (int i = 0; i < SIZE; i++)
        visited[i] = false; // �������������� ��� ������������

//    for (int pass = from; pass++; pass < to)
  //  {
        //std::cout << "v" << current << " -> "; // ����� �������
        //visited[pass]= true; // �������� ��� ����������
        //for (int i = 0; i < SIZE; i++)
        //{
            //if(edgeExists(pass,i) && !visited[i])
            routes = depthInner(from, to, visited); // ���� ���������� ����� � ������� �� ����������, 
            //�� ������� �� ���� � ������� �������
        //}
    //}
    return routes;
}
int Graph::depthInner(int from, int to, bool visited[])
{
    std::cout << "v" << from << " -> "; // ����� �������
    visited[from] = true; // �������� ��� ����������
    if (from == to)
        return 1;
    for (int i = 0; i < SIZE; i++)
    {
        if (edgeExists(from, i) && !visited[i])
            depthInner(i, to, visited); // ���� ���������� ����� � ������� �� ����������,
        // �� ������� �� ���� � ������� �������
    }
    return 0;
}
