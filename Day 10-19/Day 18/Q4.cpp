#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Check if Binary Tree is height balanced or not

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
        
    int lh=height(root->left);
    int rh=height(root->right);
    
return max(lh,rh)+1;
}

bool balanced(Node* root)
{
    if(root==NULL)
        return true;
        
    int lh=height(root->left);
    int rh=height(root->right);
    
    if(abs(lh-rh)<=1 && balanced(root->left) && balanced(root->right))
        return true;

return false;
}

int main()
{
    boost;
return 0;
}