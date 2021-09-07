// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int s, int d){
        if(s == 0) return "-1";
        if(s > 9* d) return "-1";
        
        int res[d];
        
        s--;
        
        for(int i = d - 1; i >= 0; i--){
            if(s > 9){
                res[i] = 9;
                s -= 9;
            }
            else{
                res[i] = s;
                s = 0;
            }
        }
        
        res[0] += s + 1;
        
        string ans;
        for(int i = 0; i < d; i++) ans += to_string(res[i]);
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends