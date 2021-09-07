// CPP to design platform for maximum stoppage
#include <bits/stdc++.h>
using namespace std;
  
// number of platforms and trains
#define n 2
#define m 5
  
// function to calculate maximum trains stoppage
int maxStop(int arr[][3]){
    vector<pair<int, int> > vec[n + 1];

    for(int i = 0; i < m; i++) vec[arr[i][2]].push_back({arr[i][1], arr[i][0]});

    for(int i = 0; i <= n; i++) sort(vec[i].begin(), vec[i].end());

    int count = 0;

    for(int i = 1; i<= n; i++) {
        int x = 0;
        count++;
        for(int j = 1; j< vec[i].size(); j++){
            if(vec[i][j].second >= vec[i][x].first){
                x = j;
                count++;
            }
        }
    }
    
    return count;
}


// driver function
int main()
{
    int arr[m][3] = { 1000, 1030, 1,
                      1010, 1020, 1,
                      1025, 1040, 1,
                      1130, 1145, 2,
                      1130, 1140, 2 };
    cout << "Maximum Stopped Trains = "
         << maxStop(arr);
    return 0;
}