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
vector<int> preOrder(Node* root)
{
    vector<int> v;
    if(root==NULL)
        return v;
    
    v.push_back(root->data);
    
    vector<int> v1=preOrder(root->left);
    for(auto it=v1.begin();it!=v1.end();it++)
        v.push_back(*it);

    vector<int> v2=preOrder(root->right);
    for(auto it=v2.begin();it!=v2.end();it++)
        v.push_back(*it);
        
return v;
}

//Iteration
vector<int> preorder(Node *root)
{
    stack<Node*> s;
    s.push(root);
    vector<int> v;

    while(!s.empty())
    {
        //Going center
        auto curr=s.top();
        s.pop();

        if(curr)
        {
            v.push_back(curr->data);

            //Going right
            s.push(curr->right);
            
            //Going left
            s.push(curr->left);
        }
    }
return v;
}
int main()
{
    boost;
return 0;
}