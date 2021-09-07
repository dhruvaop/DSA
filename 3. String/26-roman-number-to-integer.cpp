#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(string &str) {
    map<char, int> m;
    m.insert({ 'I', 1 });
    m.insert({ 'V', 5 });
    m.insert({ 'X', 10 });
    m.insert({ 'L', 50 });
    m.insert({ 'C', 100 });
    m.insert({ 'D', 500 });
    m.insert({ 'M', 1000 });

    int ans = 0;

    for(int i = 0; i < str.length(); i++){
        if(m[str[i]] < m[str[i + 1]]){
            ans += m[str[i + 1]] - m[str[i]];
            i++;
            continue;
        }
        ans += m[str[i]];
    }
    
    return ans;
}

int main() {
    
    string s = "XX";
    cout << romanToDecimal(s) << endl;
}

