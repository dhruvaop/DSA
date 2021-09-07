#include <bits/stdc++.h>
#define ll                      long long int
#define i(a,n)                  int a=n;
#define l(a,n)                  ll a=n;
#define d(a,n)                  double a=n;
#define s(a)                    string a;
#define c(a)                    ll a; cin>>a;
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
 
int dp[1001][1001];

int solve(ll h, ll a, ll i){
    if(h <= 0 || a <= 0) return 0;
    if(dp[h][a] != -1) return dp[h][a];

    ll x = 0, y = 0, z = 0;
    if(i!=1) x = 1 + solve(h+3,a+2,1);
    if(i!=2) y = 1 + solve(h-5,a-10,2);
    if(i!=3) z = 1 + solve(h-20,a+5,3);

    return dp[h][a] = max({x, y, z});
}

int main()
{
    fast;
    T{
        c(health);
        c(armor);
        memset(dp, -1, sizeof(dp));
        con(max({solve(health+3,armor+2,1),solve(health-5,armor-10,2),solve(health-20,armor+5,3)}));
    }
    return 0;
}
