// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
int PalinArray(int a[], int n)
{  //add code here.
    int count = 0;
    for(int i = 0; i < n; i++){
        
        string s = to_string(a[i]);
        
        int start = 0, end = s.length() - 1, palindrome = 0;
        
        if(end == 0) palindrome = 1;
        else{
            while(start < end){
                if(s[start] == s[end]) palindrome = 1;
                if(s[start] != s[end]){
                    palindrome = 0;
                    break;
                }
                
                start ++;
                end --;
            }
        }
        
        if(palindrome == 1){
            count ++;
            palindrome = 0;
        }
    }
    
    if(count == n) return 1;
    return 0;

}