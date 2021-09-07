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
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ret(x)                  return cout<<x,0;
 
using namespace std;

struct Interval{
    int start,end;
};

bool mySort(Interval a, Interval b){
    return a.start < b.start;
}

int main()
{
    fast;
    Interval arr[] = { {1,3}, {2,6}, {8,10}, {15,18} };
    int n = sizeof(arr)/sizeof(arr[0]), index = 0;

    sort(arr, arr+n, mySort);

    f1(i,1,n){
        if(arr[index].end >= arr[i].start){
            arr[index].start = min(arr[index].start,arr[i].start);
            arr[index].end = max(arr[index].end, arr[i].end);
        }
        else arr[++index] = arr[i];
    }

    cout << "\n The Merged Intervals are: ";
    for (int i = 0; i <= index; i++) cout << "[" << arr[i].start << ", " << arr[i].end << "] ";

    return 0;
}
