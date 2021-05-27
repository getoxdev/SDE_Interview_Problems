#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Add two numbers as LinkedList

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* addTwoLists(struct Node* l1, struct Node* l2)
{
    int c=0;
    int t=(l1->data)+(l2->data)+c;
    Node *head=new Node((t>9)?t%10:t);
    Node *ptr=head;
    c=t/10;
    l1=l1->next;
    l2=l2->next;
    
    while(l1 && l2)
    {
        t=(l1->data)+(l2->data)+c;
        Node *temp=new Node((t>9)?t%10:t);
        c=t/10;
        ptr->next=temp;
        ptr=temp;
        l1=l1->next;
        l2=l2->next;
    }
    
    while(l1)
    {
        t=(l1->data)+c;
        Node *temp=new Node((t>9)?t%10:t);
        c=t/10;
        ptr->next=temp;
        ptr=temp;
        l1=l1->next;
    }
    
    while(l2)
    {
        t=(l2->data)+c;
        Node *temp=new Node((t>9)?t%10:t);
        c=t/10;
        ptr->next=temp;
        ptr=temp;
        l2=l2->next;
    }
    
    if(c)
    {
        Node *temp=new Node(c);
        ptr->next=temp;
        ptr=temp;
    }
    
return head;
}


int main()
{
    boost;
return 0;
}