#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Merge two sorted LinkedList 

struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* sortedMerge(Node* a, Node* b)  
{  
    Node *result=NULL;
    
    if(a==NULL)
        return (b);
    if(b==NULL)
        return (a);
        
    if(a->data<=b->data)
    {
        result=a;
        result->next=sortedMerge(a->next,b);
    }
    else
    {
        result=b;
        result->next=sortedMerge(a,b->next);
    }
    
return (result);
}
  
int main()
{
    boost;
return 0;
}