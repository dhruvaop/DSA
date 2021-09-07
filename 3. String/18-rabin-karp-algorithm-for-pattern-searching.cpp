#include <bits/stdc++.h>
#define D 256
 
using namespace std;

void search (char pat[], char txt[], int q){
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0; 
    int t = 0;
    int h = 1;

    for (i = 0; i < M - 1; i++) h = (h * D) % q;

    for (i = 0; i < M; i++){
        p = (D * p + pat[i]) % q;
        t = (D * t + txt[i]) % q;
    }

    for (i = 0; i <= N - M; i++){
        if ( p == t ){
            for (j = 0; j < M; j++) if (txt[i+j] != pat[j]) break;
 
            if (j == M) cout<<"Pattern found at index "<< i<<endl;
        }
 
        if ( i < N-M ){
            t = (D *(t - txt[i]*h) + txt[i+M])%q;
 
            if (t < 0)
            t = (t + q);
        }
    }
}


int main()
{
    char txt[] = "GEEKS FOR GEEKS";
    char pat[] = "GEEK";
    int q = 101;
    search(pat, txt, q);

    // int firstLetter = pat[0], len = pat.length();

    // for(int i = 0; i < txt.length(); i++){
    //     if(txt[i] == firstLetter){
    //         int found = i, count = 0;
    //         for(int j = 0, k = i; j < len; j++, k++){
    //             if(pat[j] == txt[k]) count++;
    //             else break;
    //         }
    //         if(count == len) cout << "Pattern found at index " << found << endl;
    //     }
    // }

    return 0;
}
