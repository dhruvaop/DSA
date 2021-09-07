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

int getPairsCount(int arr[], int n, int k) {
        
    unordered_map<int,int> m;
    int totalPair = 0;

    for(int i = 0; i < n; i++) m[arr[i]]++;

    for (int i = 0; i < n; i++){
        totalPair += m[k - arr[i]];
        if(k - arr[i]==arr[i]) totalPair --;
    }
    
    return totalPair / 2;
}
 
int main()
{
    fast;
    int arr[] = {48,24,99,51,33,39,29,83,74,72,22,46,40,51,67,37,78,76,26,28,76,25,10,65,64,47,34,88,26,49,86,73,73,36,75,5,26,4,39,99,27,12,97,67,63,15,3,92,90};
    int n = 49, k = 50, maxNo = INT_MIN, totalPairs = 0, allSame = 0;


    cout << getPairsCount(arr,  n,  k) << endl;

    // f(i,n) maxNo = max(maxNo, arr[i]);
    
    // f(i,n-1) if(arr[i]==arr[i+1]) allSame++;

    // if(allSame == n -1){
    //     int ans = 1;
    //     f1(i,1,allSame+1) ans *= i;
    //     con(ans);
    //     return 0;
    // }

    // int newArr[maxNo+1] = {0};

    // f(i,n) newArr[arr[i]]++;

    // f(i,n){
    //     int needed = k - arr[i];
    //     if(newArr[needed] >=1 && needed > 0 ){
    //         cout<< "pairs are: "<< arr[i] <<" "<< needed <<endl;
    //         newArr[needed]--;
    //         totalPairs++;
    //     } 
    //     else continue;
    // }

    // con(totalPairs);

    return 0;
}
