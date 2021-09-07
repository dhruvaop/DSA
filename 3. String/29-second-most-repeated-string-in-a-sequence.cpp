// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    int hashFun (string str){
        int n = str.length(), ans = 0;
    
        for(int i = 0; i < n; i++) 
            ans += (str[i] - 'a' + 1) * pow(10, n - i - 1);
           
        return ans;
    }
    
    string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> m;
        
        int first = INT_MIN, second = INT_MIN;
        
        for (int i = 0; i < n; i++) m[arr[i]]++;
    
        for(auto i = m.begin(); i != m.end(); i++){
            if(i->second > first){
                second = first;
                first = i->second;
            }
            
            else if(i->second > second && i->second != first) second = i->second;
        }
        
        for(auto i = m.begin(); i != m.end(); i++) if(i->second == second) return i->first;
            
            
        return arr[1];
    
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// } Driver Code Ends