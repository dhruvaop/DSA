// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long minV = arr[0], maxV = arr[0], maxP = arr[0];
	    
	    for(int i = 1; i < n; i++){
	        if(arr[i] < 0) swap(maxV, minV);
	        
	        maxV = max(1ll * arr[i], maxV * arr[i]);
	        minV = min(1ll * arr[i], minV * arr[i]);
	        
	        maxP = max(maxP, maxV);
	    }
	    
	    return maxP;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends