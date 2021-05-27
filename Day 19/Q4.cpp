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

bool sym(Node *root1, Node *root2)
{
    if(!root1 && !root2)
        return true;
        
    if(root1 && root2)
        return (sym(root1->left,root2->right) && sym(root1->right,root2->left));
        
return false;        
}

// Return true or false denoting whether the tree is symmetric or not
bool isSymmetric(struct Node* root)
{
	if(sym(root,root))
	    return true;
	else
	    return false;
}

int main()
{
    boost;
return 0;
}