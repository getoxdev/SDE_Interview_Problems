#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Populate next right pointers of a Tree

struct Node
{
  int data;
  Node *left=NULL,*right=NULL,*nextRight=NULL;
};

Node* connect(Node* root) 
{
    if(!root)
        return root;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        int sz=q.size();
        for(int i=0;i<sz;i++)
        {
            Node *temp=q.front();
            q.pop();
            
            if(i!=sz-1)
                temp->nextRight=q.front();
            
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
        }
    }
    
return root;  
}

int main()
{
    boost;
return 0;
}