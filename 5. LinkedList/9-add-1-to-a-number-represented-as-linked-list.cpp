// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node *head){
        if(head == NULL || head->next == NULL) return head;
        
        Node* Rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return Rest;
    }
    
    Node* addOne(Node *head) 
    {
        head = reverse(head);
        Node* res = head;
        Node* temp = NULL;
        Node* prev = NULL;
        
        int carry = 1, sum;
        while(head != NULL){
            sum = carry + head->data;
            carry = (sum >= 10) ? 1 : 0;
            sum %= 10;
            head->data = sum;
            temp = head;
            head = head->next;
        }
        
        if(carry > 0) temp->next = new Node(carry);
        
        head = res;
        
        return reverse(head);
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends