// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    // int dp[1001][1001];
    // int solve(int x, int y, string &s1, string &s2){
    //     if(x == -1 || y == -1) return 0;
    //     if(dp[x][y] != -1) return dp[x][y];
        
    //     if(s1[x] == s2[y]) return dp[x][y] = 1 + solve(x-1,y-1,s1,s2);
        
    //     int a = solve(x-1, y, s1, s2);
    //     int b = solve(x, y-1, s1, s2);
    //     return dp[x][y] = max(a,b);
    // }
    
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[2][y+1];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i <= x; i++){
            for(int j = 0; j <= y; j++){
                if(i == 0 || j == 0) dp[i%2][j] = 0;
                else if(s1[i-1] == s2[j-1]) dp[i%2][j] = 1 + dp[(i+1)%2][j-1];
                else dp[i%2][j] = max(dp[i%2][j-1], dp[(i+1)%2][j]);
            }
        }
        
        return dp[x%2][y];
        // return solve(x-1, y-1, s1, s2);
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends