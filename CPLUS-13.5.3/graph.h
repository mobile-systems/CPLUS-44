#pragma once
#include <iostream>

#ifndef __GRAPH__
#define __GRAPH__

#define SIZE 10

class Graph {
public:
    Graph();
    // ���������� �������
    void addVertex(int vnumber);
    // ���������� �����
    void addEdge(int v1, int v2, int weight);
    // �������� �������
    void delVertex(int vnumber);
    // �������� �����
    void delEdge(int v1, int v2);
    //����� ���������� �����
    int findPathCount(int v1, int v2);
    int dummy1(int v1, int v2);
    void dummy2(void** param);
private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(int v);
    int depthInner(int current, int to, bool visited[]);

    int matrix[SIZE][SIZE]; // ������� ���������

    int vertexes[SIZE]; // ��������� ������
    int vertexCount; // ���������� ����������� ������
};
#endif
