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
 
int main()
{
    fast;
    int r = 3, c = 4, key  = 166, searchAt = -1, ans = 0;

    int matrix[r][c] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    for(int i = 0; i < r; i++) {
        if(matrix[i][c - 1] > key){
            searchAt = i;
            break;
        } 
        else if(matrix[i][c - 1] == key) return cout << "found att: " << i + 1 << ", " << c << endl, 0;
    }

    if(searchAt >= 0) for(int i = 0; i < c; i++) if(matrix[searchAt][i] == key) return cout << "found at: " << searchAt + 1 << ", " << i + 1 << endl, 0;
    
    return cout << "Not found" <<endl, 0;
}
