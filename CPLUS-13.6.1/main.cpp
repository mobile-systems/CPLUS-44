#include"graph.h"

#define VERYBIGINT 1000000000
void Graph::findMinDistancesFloyd()
{
    int weights[SIZE][SIZE]; // матрица путей
    // инициализаци матрицы
    for(int i=0; i< SIZE; i++)
    {
        for(int j =0; j <SIZE; j++)
        {
            if(i == j)
            {
                weights[i][j] = 0; // путь до самой себя равен 0
            } else {
                if(!edgeExists(i,j))
                {
                    weights[i][j] = VERYBIGINT; // если ребра нет
                } else {
                    weights[i][j] = matrix[i][j]; // если ребро есть
                }
            }
        }
    }
    
    for(int k=0; k<vertexCount; k++) // итерации по k
    {
        int ck = vertexes[k]; // возьмем номер вершины
        for(int i = 0; i<vertexCount; i++)
        {
            if(i == k)
                continue;
            int ci = vertexes[i]; 
            for(int j = 0; j<vertexCount;j++)
            {
                if(j == k)
                    continue;
                int cj = vertexes[j];
                if(weights[ci][ck] + weights[ck][cj] < weights[ci][cj]) {
                    // пересчет мматрицы путей
                    weights[ci][cj] = weights[ci][ck] + weights[ck][cj];
                }
            }
        }
    }
    
    for(int i = 0; i<vertexCount ; i++)  
    {
        // вывод всех минимальных путей от вершины '0'
        std::cout << "V" << i << ": " << weights[0][vertexes[i]] << ", ";
    }
}


int main()
{
    Graph g;
    
    g.addVertex(0);
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(5);
    
    g.addEdge(0,2,13);
    g.addEdge(0,4,21);
    g.addEdge(0,5,27);
    g.addEdge(2,3,82);
    g.addEdge(2,4,77);
    g.addEdge(4,1,43);
    g.addEdge(4,5,11);
    g.addEdge(5,1,38); 
    
    g.findMinDistancesFloyd();
    return 0;
}
