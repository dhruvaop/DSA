// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    
    int max1 = INT_MIN, temp = 0;
    for(int i = 0; i < n; i++) max1 = max(max1, a1[i]);
    
    int newArr[max1 + 1] = {0};
    
    for(int i = 0; i < n; i++) newArr[a1[i]]++;
    
    for(int i = 0; i < m; i++) if(newArr[a2[i]] > 0) temp++;
    
    if(temp == m) return "Yes";
    else return "No";
    
}