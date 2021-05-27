#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Binary Tree to Doubly Linked List

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void recurTree(Node *root,Node **prev,Node **head)
{
    if(root==NULL)
        return;
    
    recurTree(root->left,prev,head);
    
    if((*prev)==NULL)
        (*head)=root;
    else
    {
        root->left=(*prev);
        (*prev)->right=root;
    }
                
    (*prev)=root;
    
    recurTree(root->right,prev,head);

return;
}

//Function to convert binary tree to doubly linked list and return it.
Node * bToDLL(Node *root)
{
    Node *head=NULL,*prev=NULL;
    recurTree(root,&prev,&head);
    
return head;
}

int main()
{
    boost;
return 0;
}