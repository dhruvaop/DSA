// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i = 0, j = 0,k = 0, newArr[n+m];
	    
	    while(i < n && j < m){
	        if(arr1[i] < arr2[j]) newArr[k++] = arr1[i++];
	        else newArr[k++] = arr2[j++];
	    }
	    
	    for(;i<n;i++) newArr[k++] = arr1[i];
	    for(;j<m;j++) newArr[k++] = arr2[j];
	    
	    for(int u = 0 ; u < n; u++) arr1[u] = newArr[u];
	    for(int u = 0 ; u < m; u++) arr2[u] = newArr[u+n];
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends