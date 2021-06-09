#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Diameter of a Binary Tree

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

int diameter(Node* root,int &ans)
{
    if(root==NULL)
        return 0;
        
    int lh = diameter(root->left,ans);
    int rh = diameter(root->right,ans);

    ans=max(ans,1+lh+rh);
    
return max(lh,rh)+1;
}

int main()
{
    boost;
    int ans = INT_MAX;
return 0;
}