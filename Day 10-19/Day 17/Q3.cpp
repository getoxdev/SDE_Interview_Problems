#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Postorder Traversal (with and without recursion)

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
void postOrder(Node* root,vector<int> &v)
{
    if(root==NULL)
        return;
    
    postOrder(root->left,v);
    postOrder(root->right,v);
    v.push_back(root->data);

return;
}

//Iteration
vector<int> postorder(Node *root)
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
            s.top().second++;
            
            if(temp->right)
                s.push({temp->right,1});
        }
        else if(s.top().second==3)
        {
            Node *temp=s.top().first;
            res.push_back(temp->data);
            s.pop();
        }
    }
    
return res;
}

int main()
{
    boost;
return 0;
}