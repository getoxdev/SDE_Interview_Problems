#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Rotate a LinkedList

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* rotate(Node* head, int k)
{
    Node *kNode,*curr=head;
    int ct=1;
    
    while(curr!=NULL && ct<k)
    {
        curr=curr->next;
        ct++;
    }
    
    if(curr==NULL)
        return head;
        
    kNode=curr;
    
    while(curr->next!=NULL)
        curr=curr->next;
    
    curr->next=head;
    head=kNode->next;
    kNode->next=NULL;
    
return head;
}

int main()
{
    boost;
return 0;
}