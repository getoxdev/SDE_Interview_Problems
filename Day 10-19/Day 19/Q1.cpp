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

int maxNode(Node *root, int &res)
{
    if(root==NULL)
        return 0;
        
    int lh = maxNode(root->left,res);
    int rh = maxNode(root->right,res);
    
    int temp=max(root->data,root->data+max(lh,rh));
    
    res=max(res,max(temp,root->data+lh+rh));
        
return temp;
}

int maxPath(Node* node) 
{
    int res=INT_MIN;
    int temp=maxNode(node,res);
    
return res;
}

int main()
{
    boost;
return 0;
}