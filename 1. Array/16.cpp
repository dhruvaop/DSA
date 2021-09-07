// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long count = 0, newArr[N];
        
        for(long long i = 0; i < N; i++) newArr[i] = arr[i];
        
        sort(newArr, newArr + N);

        for(long long i = 0; i < N; i++){

            long long low = 0, high = N-1, key = arr[i], mid = floor((low + high)/2), index = 0;
            
            while(low <= high){
                mid = floor((low + high)/2);
                if(key == newArr[mid]){
                    index = mid;
                    break;
                }
                else if(key < newArr[mid]) high = mid - 1;
                else low = mid + 1;
            }
            
            count = count + index - i;
        }
        
        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends