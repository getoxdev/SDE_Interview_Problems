#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Reverse a LinkedList

struct Node
{
    int data;
    struct Node *next;
};

struct Node* reverseList(struct Node *head)
{
    Node *prev=NULL, *curr=head, *nxt=NULL;
    
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    
    head=prev;
    
return head;
}

int main()
{
    boost;
return 0;
}