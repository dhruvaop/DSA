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
 
int main()
{
    fast;
    c(n);
    while(true){
        ll arr[n], work = 0, i = 0, j = 0;
        ca(arr,n);
        vector<pair<ll, ll> > buy;
        vector<pair<ll, ll> > sell;

        f(i,n){
            if(arr[i] > 0) buy.push_back({arr[i], i});
            else sell.push_back({arr[i], i});
        }

        while(i < buy.size() && j < sell.size()){
            ll x = min(buy[i].first, -sell[j].first);
            buy[i].first -= x;
            sell[j].first += x;
            int diff = abs(buy[i].second - sell[j].second);
            work += (x * diff);
            if(buy[i].first == 0) i++;
            if(sell[j].first == 0) j++;
        }

        con(work);
        ci(n);
        if(n == 0) break;
    }
    return 0;
}
