#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find intersection point of a Y LinkedList

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int getLen(Node *head)
{
    Node *temp=head;
    int len=1;

    while(temp->next!=NULL)
    {
        len++;
        temp=temp->next;
    }

return len;
}

int intersectNode(int d, Node* head1, Node* head2)
{
    Node *curr1=head1,*curr2=head2;
    
    for(int i=0;i<d;i++)
    {
        if(curr1==NULL)
            return -1;
            
        curr1=curr1->next;
    }
    
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1==curr2)
            return curr1->data;
            
        curr1=curr1->next;
        curr2=curr2->next;
    }
    
return -1;
}

int intersectPoint(Node* head1, Node* head2)
{
    int len1=getLen(head1),len2=getLen(head2),d=0;
    Node *curr1=head1,*curr2=head2;
    
    if(len1>len2)
    {
        d=len1-len2;
        return intersectNode(d,head1,head2);
    }
    else if(len2>len1)
    {
        d=len2-len1;
        return intersectNode(d,head2,head1);
    }
    else
    {
        while(curr1!=NULL && curr2!=NULL)
        {
            if(curr1==curr2)
                return curr1->data;
                
            curr1=curr1->next;
            curr2=curr2->next;
        }
    }

return -1;
}

int main()
{
    boost;
return 0;
}