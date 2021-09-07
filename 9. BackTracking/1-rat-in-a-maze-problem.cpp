// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void ratinMaze(vector<vector<int>> &m, int n, int x, int y, string path, vector<string> &possiblePaths){
        if(x < 0 || y < 0 || x >=n || y >= n || m[x][y] == 0 ) return;

        if(x == n - 1 && y == n - 1){
            possiblePaths.push_back(path);
            return;
        }

        m[x][y] = 0;
        ratinMaze(m, n, x + 1, y, (path + "D"), possiblePaths);
        ratinMaze(m, n, x, y + 1, (path + "R"), possiblePaths);
        ratinMaze(m, n, x, y - 1, (path + "L"), possiblePaths);
        ratinMaze(m, n, x - 1, y, (path + "U"), possiblePaths);
        m[x][y] = 1;

        return;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> possiblePaths;
        if(m[0][0] == 0 || m[n - 1][n - 1] == 0) return possiblePaths;
        
        string path;
        ratinMaze(m, n, 0, 0, path, possiblePaths);

        return possiblePaths;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends