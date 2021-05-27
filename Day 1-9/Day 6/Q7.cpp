#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Clone a Linked List with random and next pointer

struct Node 
{
    int data;
    struct Node *next;
    struct Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

Node* clone(Node *head)
{
    Node *curr=head,*temp;

    while(curr)
    {
        temp=curr->next;
        curr->next = new Node(curr->data);
        curr->next->next=temp;
        curr=temp;
    }

    curr=head;

    while(curr)
    {
        if(curr->next)
            curr->next->random = (curr->random)?curr->random->next:curr->random;

        curr = (curr->next)?curr->next->next:curr->next;
    }

    Node* copy = head->next;
    temp=copy;

    while(head && copy)
    {
        head->next = (head->next)?head->next->next:head->next;
        copy->next = (copy->next)?copy->next->next:copy->next;

        head=head->next;
        copy=copy->next;
    }

return temp;
}

int main()
{
    boost;
return 0;
}