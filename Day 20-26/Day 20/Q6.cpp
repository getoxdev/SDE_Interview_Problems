#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

struct Node 
{
    int key;
    Node *left;
    Node *right;

    Node(int val) 
    {
        key = val;
        left = right = NULL;
    }
};

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root==NULL)
        return;
        
    if(root->key==key)
    {
        if(root->left!=NULL)
        {
            //Go to max value of the left subtree
            Node *t1=root->left;
            while(t1->right)
                t1=t1->right;
            pre=t1;
        }
        
        if(root->right!=NULL)
        {
            //Go to min value of the right subtree
            Node *t2=root->right;
            while(t2->left)
                t2=t2->left;
            suc=t2;
        }
    }
    
    //Go to right subtree
    if(root->key<key)
    {
        pre=root;
        findPreSuc(root->right,pre,suc,key);
    }
    //Go to left subtree
    else if(root->key>key)
    {
        suc=root;
        findPreSuc(root->left,pre,suc,key);
    }

return;
}

int main()
{
    boost;
return 0;
}