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

Node* getBST(vector<int> nums,int start,int end)
{
    if(start>end)
        return NULL;
    
    int mid = start+((end-start)/2);
    Node* root = new Node(nums[mid]);
    
    root->left = getBST(nums,start,mid-1);
    root->right = getBST(nums,mid+1,end);
    
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