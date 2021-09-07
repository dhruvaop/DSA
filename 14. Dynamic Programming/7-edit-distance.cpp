// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string str, string temp) {
        int s = str.length();
        int t = temp.length();
        
        int dp[s+1][t+1];
        
        memset(dp, -1, sizeof(dp));
        
        for(int i = 0; i <= s; i++) dp[i][0] = i;
        for(int i = 0; i <= t; i++) dp[0][i] = i;
        
        for(int i = 1; i <= s; i++){
            for(int j = 1; j<=t; j++){
                if(str[i-1] == temp[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                if(str[i-1] != temp[j-1]){
                    int a = dp[i-1][j-1];
                    int b = dp[i][j-1];
                    int c = dp[i-1][j];
                    dp[i][j] = 1 + min(a, min(b, c));
                }
            }
        }
        
        return dp[s][t];
    
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends