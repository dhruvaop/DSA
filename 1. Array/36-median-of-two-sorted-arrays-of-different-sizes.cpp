#include <bits/stdc++.h>
#define ll                      long long int
#define i(a,n)                  int a=n;
#define l(a,n)                  ll a=n;
#define d(a,n)                  double a=n;
#define s(a)                    string a;
#define c(a)                    ll a; cin>>a;a
#define cd(a)                   double a; cin>>a;
#define cs(a)                   string a; cin>>a;
#define ci(a)                   cin>>a
#define co(a)                   cout<<a
#define cos(a)                  cout<<a<<" "
#define con(a)                  cout<<a<<endl
#define yes                     cout<<"YES"<<endl
#define no                      cout<<"NO"<<endl
#define nl                      cout<<endl
#define ca(arr,n)               for(ll i=0;i<n;i++) cin>>arr[i]
#define caa(arr,n)              c(n); ll arr[n]; for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n)               for(ll i=a;i>=n;i--)
#define f(i,n)                  for(ll i=0;i<n;i++)
#define f1(i,a,n)               for(ll i=a;i<n;i++)
#define lcm(a,b)                (a*b)/__gcd(a,b)
#define T                       ll t=1; cin>>t; while(t--)
#define sr(a,n)                 sort(a,a+n)
#define rv(a,n)                 reverse(a,a+n)
#define sz(a)                   (sizeof(a)/sizeof(a[0]))
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ret(x)                  return cout<<x,0;
 
using namespace std;

int find_median(int arr[] , int n)
{
    int index = n - 1;
    
    sort (arr, arr + n);
    
    if (n % 2 == 0) return (arr[index / 2] + arr[(index / 2) + 1]) / 2;
    else return arr[index / 2];
}

int mergeArr(int arr1[] ,int arr2[], int n, int m){
    int i = 0, j = 0, k = 0, newSize = n + m;
    int newArr[newSize];
	    
    while(i < n && j < m){
        if(arr1[i] < arr2[j]) newArr[k++] = arr1[i++];
        else newArr[k++] = arr2[j++];
    }
    
    for(;i<n;i++) newArr[k++] = arr1[i];
    for(;j<m;j++) newArr[k++] = arr2[j];

    find_median(newArr, newSize);
}

int main()
{
    fast;

    int arr1[] = {2, 3, 5, 8}, arr2[] = {10, 12, 14, 16, 18, 20};
    int n = sz(arr1), m = sz(arr2);

    cout << mergeArr(arr1, arr2, n, m);

    return 0;
}
