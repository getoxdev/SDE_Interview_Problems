#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Floor and Ceil in a BST

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};

int floor(Node* root, int key)
{
    if(root==NULL)
        return INT_MAX;
        
    if(root->data==key)
        return root->data;
    
    //Go to left subtree
    if(root->data>key)
        return floor(root->left,key);
    
    //Go to right subtree
    int f=floor(root->right,key);

return (f<=key)?f:root->data;
}

int ceil(Node* root,int key)
{
    if(root==NULL)
        return INT_MIN;
        
    if(root->data==key)
        return root->data;
    
    //Go to right subtree
    if(root->data<key)
        return floor(root->right,key);
    
    //Go to left subtree
    int c=floor(root->left,key);

return (c>=key)?c:root->data;
}

void floorCeil(Node *root, int key,int &f,int &c)
{
    if(!root)
        return;
    
    while(root)
    {
        if(root->data==key)
        {
            f=root->data;
            c=root->data;
            return;
        }
        //Go to left subtree to find floor
        else if(root->data>key)
        {
            c=root->data;
            root=root->left;
        }
        //Go to right subtree to find ceil
        else if(root->data<key)
        {
            f=root->data;
            root=root->right;
        }
    }

return;
}

int main()
{
    boost;
return 0;
}