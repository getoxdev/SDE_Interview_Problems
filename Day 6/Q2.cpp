#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Check if a LinkedList is palindrome or not

struct Node {
  int data;
  struct Node *nxt;
  Node(int x) {
    data = x;
    nxt = NULL;
  }
};

struct Node* reverseList(struct Node *head)
{
    Node *prev=NULL, *curr=head, *next=NULL;

    while(curr!=NULL)
    {
        next=curr->nxt;
        curr->nxt=prev;
        prev=curr;
        curr=next;
    }
    
    head=prev;
    
return head;
}

bool isPalindrome(Node* head)
{
    Node *slowPtr=head,*fastPtr=head,*prevSlowPtr=NULL,*shalf=NULL,*fhalf=head;

    if(head->nxt==NULL)
        return true;

    while(fastPtr!=NULL && fastPtr->nxt!=NULL)
    {
        prevSlowPtr=slowPtr;
        slowPtr=slowPtr->nxt;
        fastPtr=fastPtr->nxt->nxt;
    }

    shalf=slowPtr;
    prevSlowPtr->nxt=NULL;

    if(fastPtr!=NULL)
    {
        shalf=slowPtr->nxt;
    }

    shalf=reverseList(shalf);

    if(shalf==NULL || fhalf==NULL)
        return false;
    else
    {
        while(fhalf!=NULL && shalf!=NULL)
        {
            if(fhalf->data != shalf->data)
                return false;

            fhalf=fhalf->nxt;
            shalf=shalf->nxt;
        }
    }

return true;
}

int main()
{
    boost;
return 0;
}