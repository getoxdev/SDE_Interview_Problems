#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find LCA of two nodes in a BST

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Returns the LCA of the nodes with values n1 and n2 in the BST rooted at 'root' 
Node* LCA(Node *root, int n1, int n2)
{
    if(root->data<n1 && root->data<n2)
        return LCA(root->right,n1,n2);
        
    if(root->data>n1 && root->data>n2)
        return LCA(root->left,n1,n2);
        
return root;
}

int main()
{
    boost;
return 0;
}