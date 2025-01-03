#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 8

// Global variables for visited vertices and queue
int visited[MAX_VERTICES];   // Array to track visited vertices
int q[MAX_VERTICES], front = -1, rear = -1;  // Queue for BFS

// Queue operations
int isEmpty() {
    return front == -1;
}

void enqueue(int value) {
    if (rear == MAX_VERTICES - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) front = 0;  // If queue is empty, set front to 0
    q[++rear] = value;
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }
    int value = q[front];
    if (front == rear) {
        front = rear = -1;  // Reset the queue when it's empty
    } else {
        front++;
    }
    return value;
}

// BFS function
void BFS(int i, int A[][8], int n)
{
    printf("BFS starting from vertex %d: ", i);
    visited[i] = 1;  // Mark the starting vertex as visited
    enqueue(i);      // Enqueue the starting vertex

    while (!isEmpty()) {
        int u = dequeue();  // Dequeue a vertex from the queue
        printf("%d ", u);    // Print the vertex

        // Visit all the adjacent vertices of u
        for (int v = 0; v < n; v++) {  // Use 0-based index for adjacency matrix
            if (A[u][v] == 1 && !visited[v]) {  // If v is adjacent to u and not visited
                printf("%d ", v);  // Print the adjacent vertex
                visited[v] = 1;     // Mark v as visited
                enqueue(v);         // Enqueue v for further exploration
            }
        }
    }
    printf("\n");
}

int main()
{
    int A[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 1, 0, 0, 0},
        {0, 1, 0, 1, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0}
    };

    // Initialize visited array to 0 (not visited)
    for (int i = 0; i < MAX_VERTICES; i++) {
        visited[i] = 0;
    }

    // Start BFS from vertex 1 (index 1 in the matrix, which is vertex 2 in 1-based indexing)
    printf("Vertex: 1 -> ");
    BFS(1, A, 8);

    return 0;
}

