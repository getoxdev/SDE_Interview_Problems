#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Left View of Binary Tree

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

vector<int> leftView(Node *root)
{
    vector<int> res;
    
    if(!root)
        return res;
        
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
       int sz=q.size();
       for(int i=0;i<sz;i++)
       {
            Node *temp=q.front();
            q.pop();
            
            if(i==0)
                res.push_back(temp->data);
                
            if(temp->left)
                q.push(temp->left);
                
            if(temp->right)
                q.push(temp->right);
       }
    }
    
return res;
}

int main()
{
    boost;
return 0;
}