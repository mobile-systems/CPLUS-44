#include "graph.h"

// поиск кратчайшего расстояния
#define VERYBIGINT 1000000000
int Graph::findMinWayDFS(int from, int to) {
   // Ваш код должен быть здесь 
   int flag = VERYBIGINT;
   eLen = 0;
   routeLen = 0;
   while(flag != 0)
   {
        flag = 0;
        depth(from, to);
   }
   std::cout << routeLen << std::endl;
   return routeLen;
}

void Graph::depth(int start, int to)
{
    bool visited[SIZE]; // список посещенных вершин
    for(int i =0; i<SIZE; i++)
       visited[i] = false; // инициализируем как непосещенные
    depthInner(start, to, visited); // запуск алгоритма 
    
    std::cout << std::endl;
}

void Graph::depthInner(int current, int to, bool visited[])
{
    if(current == to)
        return;
    std::cout << "v" << current << " -> "; // вывод текущей
    visited[current]= true; // помечаем как посещенную
    for(int i=0; i<SIZE; i++)
    {
        if(edgeExists(current,i) && !visited[i])
        {
            if(current == to)
            return;
                eLen = edgeLen(current, i);
            routeLen += eLen;
            std::cout << eLen << std::endl;

            depthInner(i, to, visited); // если существует ребро и вершина не посещалась, то пройдем по нему в смежную вершину
        }

    }
}
// Длина ребра
int Graph::edgeLen(int v1, int v2)
{
    return matrix[v1][v2];
}