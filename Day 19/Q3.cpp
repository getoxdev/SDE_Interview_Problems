#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

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

Node* getTree(int in[],int post[],int inStart,int inEnd,int* postIndex)
{
    if(inStart>inEnd)
        return NULL;
        
    Node *root = new Node(post[*postIndex]);
    (*postIndex)--;
    
    if(inStart==inEnd)
        return root;
    
    int inIndex;
    for(int i=inStart;i<=inEnd;i++)
    {
        if(in[i]==root->data)
        {
            inIndex=i;
            break;
        }
    }
    
    root->right = getTree(in,post,inIndex+1,inEnd,postIndex);
    root->left = getTree(in,post,inStart,inIndex-1,postIndex);
    
return root;
}

// Function should construct tree and return
// root of it.  in[] stores inorder traversal
// post[] stores postorder traversal.  n is
// size of these arrays
Node *buildTree(int in[], int post[], int n) 
{
    int postIndex=n-1;
    Node *root=getTree(in,post,0,n-1,&postIndex);
    
return root;
}

int main()
{
    boost;
return 0;
}