#include"graph.h"

int main(void)
{
    Graph g;
    g.addVertex(0);
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
//   g.addVertex(5);
//   g.addVertex(6);
//   g.addVertex(7);
//   g.addVertex(8);
    g.addEdge(1, 4, 1); // 1-4
    g.addEdge(0, 4, 2); // 0-4
    g.addEdge(0, 2, 3); // 0-2
    g.addEdge(2, 3, 4); // 2-3
    g.addEdge(2, 4, 5); // 2-4

    //g.addEdge(0, 1, 1);
    //g.addEdge(0, 2, 1);
    //g.addEdge(0, 3, 1);
    //g.addEdge(2, 5, 1);
    //g.addEdge(1, 4, 1);
    //g.addEdge(4, 3, 1);
    //g.addEdge(5, 3, 1);
    //g.addEdge(4, 7, 1);
    //g.addEdge(3, 6, 1);
    //g.addEdge(3, 7, 1);
    //g.addEdge(3, 8, 1);
    //g.addEdge(5, 8, 1);
    //g.addEdge(8, 6, 1);
    //g.addEdge(7, 6, 1);

    //g.depth(0);
    g.findMinWayDFS(0,2);
    //std::cout << "Find routes: " << g.findPathCount(1, 2) << "\n";
    //std::cout << "Find routes: " << g.findPathCount(1, 2) << "\n";

    return 0;
}