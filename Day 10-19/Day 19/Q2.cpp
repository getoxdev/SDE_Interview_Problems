#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Construct Binary Tree from inorder and preorder

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* getTree(int in[],int pre[],int inStart,int inEnd,int &preIndex)
{
    if(inStart>inEnd)
        return NULL;
        
    Node *root = new Node(pre[preIndex++]);
    
    int inIndex;
    for(int i=inStart;i<=inEnd;i++)
    {
        if(in[i]==root->data)
        {
            inIndex=i;
            break;
        }
    }
    
    root->left=getTree(in,pre,inStart,inIndex-1,preIndex);
    root->right=getTree(in,pre,inIndex+1,inEnd,preIndex);
    
return root;
}

Node* buildTree(int in[],int pre[], int n)
{
    int preIndex=0;
    Node *root = getTree(in,pre,0,n-1,preIndex);
    
return root;
}

int main()
{
    boost;
return 0;
}