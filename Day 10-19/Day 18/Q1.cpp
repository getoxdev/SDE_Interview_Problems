#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Level-Order Traversal/Level-Order Traversal in Spiral form

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(Node* root)
{
    if(root==NULL)
        return 0;
        
    int lh=height(root->left)+1;
    int rh=height(root->right)+1;
    
return max(lh,rh);
}

vector<int> levelOrder(Node* node)
{
    vector<int> res;
        
    if(!node)
        return res;
    
    queue<Node*> q;
    q.push(node);
    
    while(!q.empty())
    {
        int sz=q.size();
        
        for(int i=0;i<sz;i++)
        {
            Node *temp=q.front();
            q.pop();
            res.push_back(temp->data);
            
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
        }
    }
    
return res;
}

void printSpiralUtil(Node *root,int level,bool bl)
{
    if(root==NULL)
        return;
        
    if(level==1)
        cout<<root->data<<" ";
    else if(level>1)
    {
        if(bl)
        {
            printSpiralUtil(root->left,level-1,bl);
            printSpiralUtil(root->right,level-1,bl);
        }
        else
        {
            printSpiralUtil(root->right,level-1,bl);
            printSpiralUtil(root->left,level-1,bl);
        }
    }
    
return;
}

void printSpiral(Node *root)
{
    int h=height(root);
    bool bl=true;
    
    for(int i=1;i<=h;i++)
    {
        printSpiralUtil(root,i,bl);
        bl=!bl;
    }

return;
}

int main()
{
    boost;
return 0;
}