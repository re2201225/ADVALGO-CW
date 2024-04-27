#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph {
    int V;    // Number of vertices
    vector<int>* adj;    // Adjacency list for storing edges
    vector<int>* adjT;   // Transposed adjacency list for reverse edges

public:
    Graph(int V);  // Constructor
    void addEdge(int v, int w);  // Function to add an edge
    void fillOrder(int v, bool visited[], stack<int>& Stack);  // Function to store vertices in stack based on their finishing times
    void DFSUtil(int v, bool visited[], int& size);  // Utility function for DFS
    int findLargestSCC();  // Function to find and return the size of the largest SCC
    Graph getTranspose();  // Function to create a transposed graph
};

// Constructor initializes the adjacency lists
Graph::Graph(int V) {
    this->V = V;
    adj = new vector<int>[V];
    adjT = new vector<int>[V];
}

// Add edge from vertex v to vertex w
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

// Function to return the transpose of the graph
Graph Graph::getTranspose() {
    Graph g(V);
    for (int v = 0; v < V; v++) {
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
            g.adj[*i].push_back(v);
            g.adjT[v].push_back(*i);
        }
    }
    return g;
}

// Fills Stack with vertices based on finishing times of vertices
void Graph::fillOrder(int v, bool visited[], stack<int>& Stack) {
    visited[v] = true;
    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            fillOrder(*i, visited, Stack);
    Stack.push(v);  // Push current vertex to stack after all adjacent have been processed
}

// Utility function to perform DFS
void Graph::DFSUtil(int v, bool visited[], int& size) {
    visited[v] = true;
    size++;  // Increment size of SCC
    for (auto i = adjT[v].begin(); i != adjT[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited, size);
}

// Returns the size of the largest strongly connected component
int Graph::findLargestSCC() {
    stack<int> Stack;
    bool* visited = new bool[V]();
    for (int i = 0; i < V; i++)
        if (!visited[i])
            fillOrder(i, visited, Stack);

    Graph gr = getTranspose();  // Get the transposed graph

    for (int i = 0; i < V; i++)
        visited[i] = false;

    int maxSize = 0;
    while (!Stack.empty()) {
        int v = Stack.top();
        Stack.pop();
        if (!visited[v]) {
            int size = 0;
            gr.DFSUtil(v, visited, size);
            if (size > maxSize) maxSize = size;
        }
    }
    delete[] visited;  // Clean up
    return maxSize;
}

int main() {
    Graph g(5);  // Create a graph with 5 vertices
    // Adding edges to the graph
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.addEdge(2, 4);
    g.addEdge(4, 2);

    // Print the size of the largest SCC
    cout << "The size of the largest SCC is " << g.findLargestSCC() << endl;
    return 0;
}
