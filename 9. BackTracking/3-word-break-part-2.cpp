// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool solve(set<string>ss, string s, int i, int mx, vector<string> &ans, string t){
        if(i == s.size()) return true;
        string temp = "";
        for(int k = i; k < s.size() && k < mx + i; k++){
            temp += s[k];
            
            if(ss.find(temp) != ss.end()){
                string tt = t;
                if(t.size() > 0) t += " " + temp;
                else t += temp;
                
                if(solve(ss, s, k + 1, mx, ans, t)) ans.push_back(t);
                t = tt;
            }
        }
        return false;
    }
    
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        set<string> ss;
        int mx = 0;
        for(auto x : dict){
            ss.insert(x);
            int t = x.length();
            mx = max(mx, t);
        }
        vector<string> ans;
        string temp = "";
        solve(ss, s, 0, mx, ans, temp);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends