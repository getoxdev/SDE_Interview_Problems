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

//Recursion
vector<int> inOrder(Node* root)
{
    vector<int> v;
    if(root==NULL)
        return v;
    
    v=inOrder(root->left);
    
    v.push_back(root->data);
    
    vector<int> v1=inOrder(root->right);
    
    for(auto it=v1.begin();it!=v1.end();it++)
        v.push_back(*it);
        
    return v;
}

//Iteration
vector<int> inorder(Node *root)
{
    stack<Node*> s;
    auto curr = root;
    vector<int> v;

    while(!s.empty() || curr!=NULL)
    {
        if(curr)
        {
            s.push(curr);
            //Going left
            curr=curr->left;
        }
        else
        {
            //Going center
            curr=s.top();
            v.push_back(curr->data);
            s.pop();

            //Going right
            curr=curr->right;
        }
    }
return v;
}
int main()
{
    boost;
return 0;
}