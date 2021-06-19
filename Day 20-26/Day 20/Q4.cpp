#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Check if a Binary Tree is a BST or not

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool checkBST(Node *root,Node *l,Node *r)
{
    if(root==NULL)
        return true;
        
    if(l!=NULL && root->data<=l->data)
        return false;
        
    if(r!=NULL && root->data>=r->data)
        return false;
        
return checkBST(root->left,l,root) && checkBST(root->right,root,r);
}

bool isBST(Node* root) 
{
    return checkBST(root,NULL,NULL);
}

int main()
{
    boost;
return 0;
}