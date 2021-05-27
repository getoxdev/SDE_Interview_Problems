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

struct Node* reverseInGroups(Node *head,int k)
{
    Node *prev=NULL, *curr=head, *nxt=NULL;
    int ct=0;

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

int main()
{
    boost;
return 0;
}