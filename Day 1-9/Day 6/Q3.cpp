#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Reverse a LinkedList in groups

struct Node
{
    int data;
    struct Node *next;
};

Node* reverseInGroups(Node *head,int k)
{
    if(head==NULL || head->next==NULL)
        return head;
    
    int len=0;
    Node *temp=head;
    while(temp)
    {
        len++;
        temp=temp->next;
    }
    
    if(len>=k)
    {
        int ct=0;
        Node *prev=NULL, *curr=head, *nxt=NULL;
        while(curr!=NULL && ct<k)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            ct++;
        }

        if(nxt!=NULL)
            head->next=reverseInGroups(nxt,k);

    return prev;    
    }
    
return head;
}

int main()
{
    boost;
return 0;
}