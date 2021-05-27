#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
struct Node
{
  int data;
  Node *left=NULL,*right=NULL,*nextRight=NULL;
};

Node* getNextRight(Node *p)
{
    Node *temp=p->nextRight;

    while(temp!=NULL)
    {
        if(temp->left!=NULL)
            return temp->left;
        if(temp->right!=NULL)
            return temp->right;

        temp=temp->nextRight;
    } 

return NULL;
}

void connect(Node *p)
{
    Node *temp;
    
    if(!p)
        return;
        
    p->nextRight=NULL;

    while(p!=NULL)
    {
        Node *q=p;

        while(q!=NULL)
        {
            if(q->left)
            {
                if(q->right)
                    q->left->nextRight=q->right;
                else
                    q->left->nextRight=getNextRight(q);
            }

            if(q->right)
                q->right->nextRight = getNextRight(q);

            q=q->nextRight;
        }

        if(p->left)
            p=p->left;
        else if(p->right)
            p=p->right;
        else
            p=getNextRight(p);    
    }

return;
}

int main()
{
    boost;
return 0;
}