#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Construct BST from given keys

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* getBST(vector<int> nums,int l,int r)
{
    if(l>r)
        return NULL;
    
    int m=l+(r-l)/2;
    Node* root = new Node(nums[m]);
    
    root->left = getBST(nums,l,m-1);
    root->right = getBST(nums,m+1,r);
    
return root;
}

Node* sortedArrayToBST(vector<int>& nums) 
{
    return getBST(nums,0,nums.size()-1);
}

int main()
{
    boost;
return 0;
}