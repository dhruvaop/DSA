// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string s)
	{
	    int start = 0, end = s.length() - 1, palindrome = 0;
	    if(end == 0) palindrome = 1;
	    
	    else{
            while(start < end){
                if(s[start] == s[end]) palindrome = 1;
                if(s[start] != s[end]){
                    palindrome = 0;
                    break;
                }
                
                start ++;
                end --;
            }
        }
        
        if(palindrome) return 1;
        return 0;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends