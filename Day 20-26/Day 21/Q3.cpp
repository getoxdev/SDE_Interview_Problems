#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find a pair with given sum in the BST

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool inOrderSearch(Node *root,int sum,set<int> &s)
{
    if(root==NULL)
        return false;
        
    if(inOrderSearch(root->left,sum,s))
        return true;
    
    if(s.find(sum-(root->data))!=s.end())
        return true;
    else
        s.insert(root->data);

return inOrderSearch(root->right,sum,s);
}

// root : the root Node of the given BST
// target : the target sum
int isPairPresent(struct Node *root, int target)
{
    set<int> s;

    if(inOrderSearch(root,target,s))
        return 1;
    
return 0;
}

int main()
{
    boost;
return 0;
}