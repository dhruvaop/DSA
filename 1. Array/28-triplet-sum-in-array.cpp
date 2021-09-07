// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        unordered_map<int,int> m;
        
        for(int i = 0; i < n; i++) m[A[i]] = i;
    
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int needed = X - A[i] - A[j];
                if(m[needed] && m[needed] > j) return 1;
            }
        }
        
        return 0;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends