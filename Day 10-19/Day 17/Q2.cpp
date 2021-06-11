#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Preorder Traversal (with and without recursion)

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
void preOrder(Node* root,vector<int> &v)
{
    if(root==NULL)
        return;
    
    v.push_back(root->data);
    preOrder(root->left,v);
    preOrder(root->right,v);
        
return;
}

//Iteration
vector<int> preorder(Node *root)
{
    vector<int> res;
    stack<pair<Node*,int>> s;
    s.push({root,1});
    
    while(!s.empty())
    {
        if(s.top().second==1)
        {
            Node *temp=s.top().first;
            s.top().second++;
            
            if(temp->left)
                s.push({temp->left,1});
        }
        else if(s.top().second==2)
        {
            Node *temp=s.top().first;
            res.push_back(temp->data);
            s.top().second++;
            
            if(temp->right)
                s.push({temp->right,1});
        }
        else if(s.top().second==3)
            s.pop();
    }
    
return res;
}

int main()
{
    boost;
return 0;
}