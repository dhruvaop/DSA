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
    int r = 3, c = 4;
    int matrix[r][c] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> ans;
    int top = 0, bottom = r - 1, left = 0, right = c - 1, dir =  0;

    while(top <= bottom && left <= right){
        if(dir == 0){
            for(int i = left; i <= right ; i++) ans.push_back(matrix[top][i]);
            top++;
        }
        else if(dir == 1){
            for(int i = top; i <= bottom; i++) ans.push_back(matrix[i][right]);
            right --;
        }
        else if(dir == 2){
            for(int i = right ; i >= left ; i--) ans.push_back(matrix[bottom][i]);
            bottom--;
        }
        else if(dir == 3){
            for(int i = bottom; i >= top; i--) ans.push_back(matrix[i][left]);
            left++;
        }
        dir = (dir + 1) % 4;
    }

    for (int i : ans) cos(i);

    return 0;
}
