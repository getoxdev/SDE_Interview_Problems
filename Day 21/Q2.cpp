#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find kth smallest and kth largest element in a BST

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

void inOrder(Node *root,vector<int> &v)
{
    if(!root)
        return;
    
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
    
return;
}

int kthSmallest(Node* root, int k) 
{
    vector<int> v;
    inOrder(root,v);
    
return v[k-1];
}

int kthLargest(Node* root, int k) 
{
    vector<int> v;
    inOrder(root,v);
    reverse(v.begin(),v.end());
    
return v[k-1];
}

int main()
{
    boost;
return 0;
}