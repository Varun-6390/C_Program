// Breadth-First Search (BFS) traversal on a graph using an adjacency matrix representation

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], front = -1, rear = -1;
int visited[MAX];

// Function to enqueue an element
void enqueue(int vertex) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = vertex;
}

// Function to dequeue an element
int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

// BFS function
void bfs(int graph[MAX][MAX], int vertices, int startVertex) {
    for (int i = 0; i < MAX; i++) 
        visited[i] = 0; // Initialize visited array

    enqueue(startVertex);
    visited[startVertex] = 1;

    while (front <= rear) {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);

        for (int i = 0; i < vertices; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    int graph[MAX][MAX];
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int startVertex;
    printf("Enter the starting vertex for BFS: ");
    scanf("%d", &startVertex);

    printf("BFS Traversal starting from vertex %d:\n", startVertex);
    bfs(graph, vertices, startVertex);

    return 0;
}