#include "graph.h"
// поиск количества путей
int Graph::findPathCount(int from, int to) {
    // Ваш код должен быть здесь 
    routes = 0;
    bool visited[SIZE]; // список посещенных вершин
    for (int i = 0; i < SIZE; i++)
        visited[i] = false; // инициализируем как непосещенные

    //for (int pass = from; pass++; pass < to)
    {
        //std::cout << "v" << current << " -> "; // вывод текущей
        //visited[pass]= true; // помечаем как посещенную
        //for (int i = 0; i < SIZE; i++)
        //{
            //if(edgeExists(pass,i) && !visited[i])
            depthInner(from, to, visited); // если существует ребро и вершина не посещалась, 
            //то пройдем по нему в смежную вершину
            //depthInner(from, to, visited); // если существует ребро и вершина не посещалась, 
        //}
    }
    return routes;
}
void Graph::depthInner(int from, int to, bool visited[])
{
    visited[from] = true; // помечаем как посещенную
    if (from == to)
    {
        std::cout << "v" << from << "\n"; // вывод текущей
        //visited[from] = false; // помечаем как посещенную
        routes += 1;
        exit;
    }
    else
    {
        std::cout << "v" << from << " -> "; // вывод текущей
        //visited[from] = true; // помечаем как посещенную
        for (int i = 0; i < SIZE; i++)
        {
            if (edgeExists(from, i) && !visited[i])
                depthInner(i, to, visited); // если существует ребро и вершина не посещалась,
            // то пройдем по нему в смежную вершину
        }
    }
    return;
}
