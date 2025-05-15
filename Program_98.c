// Graph Representation Using Adjacency Matrix

#include <stdio.h>

#define V 4 // Number of vertices

void printGraph(int graph[V][V])
{
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int graph[V][V] = {
        {0, 1, 0, 1},
        {1, 0, 1, 1},
        {0, 1, 0, 1},
        {1, 1, 1, 0}};

    printGraph(graph);
    return 0;
}