#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Detect a cycle and remove it

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head)
{
    Node *slowPtr=head, *fastPtr=head;
    
    if(head==NULL || head->next==NULL)
        return;
    
    while(fastPtr!=NULL && fastPtr->next!=NULL)
    {
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;
        
        if(slowPtr==fastPtr)
            break;
    }
    
    if(slowPtr==head)
    {
        while(slowPtr->next!=head)
            slowPtr=slowPtr->next;
        
        slowPtr->next = NULL;
    }
    else if(slowPtr==fastPtr)
    {
        slowPtr=head;
        while(slowPtr->next!=fastPtr->next)
        {
            slowPtr=slowPtr->next;
            fastPtr=fastPtr->next;
        }
        
        fastPtr->next=NULL;
    }
    
return;
}

int main()
{
    boost;
return 0;
}