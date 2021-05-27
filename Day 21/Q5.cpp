#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Size of the largest BST in a Binary Tree

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

struct Info{
    int siz;
    int mn;
    int mx;
    int ans;
    bool isBST;
};

Info checkBST(Node *root)
{
    if(root==NULL)
        return {0,INT_MAX,INT_MIN,0,true};
        
    if(root->left==NULL && root->right==NULL)
        return {1,root->data,root->data,1,true};
        
    Info lTree=checkBST(root->left);
    Info rTree=checkBST(root->right);
    
    Info curr;
    curr.siz=1+lTree.siz+rTree.siz;
    curr.mn=min(root->data,min(lTree.mn,rTree.mn));
    curr.mx=max(root->data,max(lTree.mx,rTree.mx));
    
    if(lTree.isBST && rTree.isBST && root->data>lTree.mx && root->data<rTree.mn)
    {
        curr.ans=1+lTree.ans+rTree.ans;
        curr.isBST=true;
    }
    else
    {
        curr.ans=max(lTree.ans,rTree.ans);
        curr.isBST=false;
    }
    
return curr;
}

int largestBst(Node *root)
{
    Info cBST=checkBST(root);
    
return cBST.ans;
}

int main()
{
    boost;
return 0;
}