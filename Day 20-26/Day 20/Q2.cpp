#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Search given key in a BST

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* searchBST(Node *root,int key)
{
    if(root==NULL || root->data==key)
        return root;

    if(key<root->data)
        return searchBST(root->left,key);
    else
        return searchBST(root->right,key);
}

int main()
{
    boost;
return 0;
}