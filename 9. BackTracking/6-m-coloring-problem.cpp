// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.

bool isSafe(bool graph[101][101], int c,  int V, int color[], int curr){
    
    for(int i = 0; i < V; i++) 
        if(graph[curr][i] && c == color[i]) return false;
    
    return true;
}

bool solve(bool graph[101][101], int m, int V, int color[], int curr){
    if(curr == V) return true;
    
    for(int c = 1; c <= m; c++){
        if(isSafe(graph, c, V, color, curr)){
            color[curr] = c;
            if(solve(graph, m, V, color, curr + 1)) return true;
            color[curr] = 0;
        }
    }
    
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    int color[V] = {0};
    
    return solve(graph, m, V, color, 0);
    
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends