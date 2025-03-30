#include "graph.h"

// поиск кратчайшего расстояния
#define VERYBIGINT 1000000000
int Graph::findMinWayDFS(int from, int to) {
    // Ваш код должен быть здесь 
    eLen = 0;
    routeLen = 0;
    recursionEXIT = true;

    //bool visited[SIZE]; // список посещенных вершин
    for(int i =0; i<SIZE; i++)
       visited[i] = false; // инициализируем как непосещенные
    depthInner(from, to); // запуск алгоритма 

    std::cout << routeLen << std::endl;
    return routeLen;
}

void Graph::depthInner(int current, int to)
{
     if(current == to || recursionEXIT == false)
     {
        recursionEXIT = false;
        return;
     }
    //std::cout << "v" << current << " -> "; // вывод текущей
    visited[current]= true; // помечаем как посещенную
    for(int i=0; i<SIZE; i++)
    {
        if(current == to || recursionEXIT == false)
        {
           recursionEXIT = false;
           return;
        }

        if(edgeExists(current,i) && !visited[i])
        {
            eLen = edgeLen(current, i);
            routeLen += eLen;
            //std::cout << eLen << std::endl;

            depthInner(i, to); // если существует ребро и вершина не посещалась, то пройдем по нему в смежную вершину
        }
    }
}
// Длина ребра
int Graph::edgeLen(int v1, int v2)
{
    return matrix[v1][v2];
}