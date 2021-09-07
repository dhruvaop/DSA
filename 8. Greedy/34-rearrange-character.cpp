#include<bits/stdc++.h> 
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

char getMaxCountChar(vector<int>& count){
    int max = 0;
    char ch;
    f(i,26){
        if(count[i] > max){
            max = count[i];
            ch = 'a' + i;
        }
    }
    
    return ch;
}

int rearrangeString(string str){
    int n = str.length();
    
    if(!n) return 0;
 
    vector<int> count(26, 0);
    for (auto ch : str) count[ch - 'a']++;
    
    char ch_max = getMaxCountChar(count);
    int maxCount = count[ch_max - 'a'];
    
    if(maxCount > (n + 1) / 2) return 0;
    
    string res(n, ' ');
    
    int ind = 0;
    
    while(maxCount){
        res[ind] = ch_max;
        ind += 2;
        maxCount--;
    }
    
    count[ch_max - 'a'] = 0;
    
    f(i, 26){
        while(count[i] > 0){
            ind = (ind >= n) ? 1 : ind;
            res[ind] = 'a' + i;
            ind += 2;
            count[i] --;
        }
    }
    
    return 1;
}
 
int main()
{
    fast;
    T{
        cs(str);
        con(rearrangeString(str));
    }
    return 0;
}
