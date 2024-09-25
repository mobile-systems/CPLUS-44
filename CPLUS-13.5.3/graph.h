#pragma once
#include <iostream>

#ifndef __GRAPH__
#define __GRAPH__

#define SIZE 10

class Graph {
public:
    Graph();
    // добавление вершины
    void addVertex(int vnumber);
    // добавление ребра
    void addEdge(int v1, int v2, int weight);
    // удаление вершины
    void delVertex(int vnumber);
    // удаление ребра
    void delEdge(int v1, int v2);
    //поиск количества путей
    int findPathCount(int v1, int v2);
    int dummy1(int v1, int v2);
    void dummy2(void** param);
private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(int v);
    void depthInner(int current, int to, bool visited[]);

    int matrix[SIZE][SIZE]; // матрица смежности

    int vertexes[SIZE]; // хранилище вершин
    int vertexCount; // количество добавленных вершин
    int routes; // Количество маршрутов
};
#endif
