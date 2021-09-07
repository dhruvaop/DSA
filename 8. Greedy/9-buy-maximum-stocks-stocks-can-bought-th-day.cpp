#include <bits/stdc++.h>

using namespace std;

long buyMaximumProducts(int n, long k, vector <int> a) {
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++) v.push_back({a[i], i + 1});
    sort(v.begin(), v.end());
    long ans = 0;
    for(int i = 0; i < n; i ++){
        long price = v[i].first;
        long stock = v[i].second;
        if(price*stock <= k){
            ans += stock;
            k -= (price*stock);
        }
        else{
            ans += (k/price);
            k -= price*(k/price);
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
    	cin >> arr[arr_i];
    }
    long k;
    cin >> k;
    long result = buyMaximumProducts(n, k, arr);
    cout << result << endl;
    return 0;
}