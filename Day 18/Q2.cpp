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
        
    int lh=height(root->left)+1;
    int rh=height(root->right)+1;
    
return max(lh,rh);
}

int main()
{
    boost;
return 0;
}