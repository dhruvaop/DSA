#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        vector<int> v;
        
        for(int i = 0; i < r; i++) 
            for(int j = 0; j < c; j++) 
                v.push_back(matrix[i][j]);
                
        
        int size = v.size();
		int index = size - 1;
		
		sort(v.begin(), v.end());
		
		if(size % 2 == 0) return (v.at(index / 2) + v.at((index / 2) + 1)) / 2;
		else return v.at(index / 2);
    }
};

int binaryMedian(int m[][MAX], int r ,int c)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i=0; i<r; i++){
        if (m[i][0] < min) min = m[i][0];
        if (m[i][c-1] > max) max = m[i][c-1];
    }
 
    int desired = (r * c + 1) / 2;
    while (min < max){
        int mid = min + (max - min) / 2;
        int place = 0;
 
        for (int i = 0; i < r; ++i)
            place += upper_bound(m[i], m[i]+c, mid) - m[i];
        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}

// int main()
// {
//     int r = 3, c = 3;
//     int m[][MAX]= { {1,3,5}, {2,6,9}, {3,6,9} };
//     cout << "Median is " << binaryMedian(m, r, c) << endl;
//     return 0;
// }