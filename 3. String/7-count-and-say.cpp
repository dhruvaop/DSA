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

string countAndSay(long long int n){

    string tempAns, s = "11", ans = "";

    if(n == 1){
        tempAns = "1";
        return tempAns;
    }

    if(n == 2){
        tempAns = "11";
        return tempAns;
    }

    for(int k = 3; k <= n; k++){
        int temp = 1;
        for(int i = 0; i < s.length() - 1; i++){
            if(s[i] == s[i + 1]){
                if(i == s.length() - 2) ans += to_string(temp + 1) + s[i];
                temp++;
            }
            else{
                ans += to_string(temp) + s[i];
                temp = 1;
            }
            if(i == s.length() - 2 && s[i] != s[i + 1]) ans += to_string(1) + s[i + 1]; 
        }

        s = ans;
        ans = "";
    }

    return s;

}

 
int main()
{
    fast;
    long long int n = 10;
    con(countAndSay(n));
    return 0;
}
 