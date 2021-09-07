#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1,2,3,4,4};
    int arrSize = sizeof(nums)/sizeof(nums[0]);
    int newArr[arrSize] = {0};
    for( int i = 0; i < arrSize ; i++) newArr[nums[i]]++;
    for( int i = 0; i < arrSize ; i++) if(newArr[i] > 1) cout << i << endl;
    return 0;
}