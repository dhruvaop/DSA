// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int dp[1000][1000];
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int wt[], int val[], int w, int n){
        if(w == 0 || n == -1) return 0;
        if(dp[n][w] != -1) return dp[n][w];
        if(wt[n] > w) return dp[n][w] = solve(wt, val, w, n - 1);
        int a = val[n] + solve(wt, val, w - wt[n], n - 1);
        int b = solve(wt, val, w, n - 1);
        return dp[n][w] = max(a, b);
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        dp[n][W];
        memset(dp, -1, sizeof(dp));
        return solve(wt, val, W, n - 1);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends