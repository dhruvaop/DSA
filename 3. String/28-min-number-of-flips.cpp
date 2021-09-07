#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}

int minFlips (string S)
{
    int even = 0, odd = 0;
    
    for(int i = 0; i < S.length(); i++){
        if(i % 2 && S[i] == '0') even++;
        if(i % 2 == 0 && S[i] == '1') even++;
        if(i % 2 == 0 && S[i] == '0') odd++;
        if(i % 2 && S[i] == '1') odd++;
    }
    
    return min(odd, even);
}