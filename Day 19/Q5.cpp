#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void flatten(Node *root)
{
    if(root==NULL || root->left==NULL && root->right==NULL)
        return;

    if(root->left!=NULL)
    {
        flatten(root->left);

        Node *temp=root->right;
        root->right=root->left;
        root->left=NULL;

        Node *t=root->right;
        while(t->right!=NULL)
            t=t->right;

        t->right=temp;
    }

    flatten(root->right);

return;
}

int main()
{
    boost;
return 0;
}