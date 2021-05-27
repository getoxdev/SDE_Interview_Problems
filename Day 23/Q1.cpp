#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

struct Node
{
    int val;
    vector<Node*> neighbors;
};

Node* cloneGraph(Node* node) 
{
    if(node==NULL)
        return node;
    
    map<Node*,Node*> mp;
    queue<Node*> q;
    
    q.push(node);
    Node* temp=new Node;
    temp->val=node->val;
    mp[node]=temp;
    
    while(!q.empty())
    {
        Node* u = q.front();
        q.pop();
        
        vector<Node*> v = u->neighbors;
        
        for(int i=0;i<v.size();i++)
        {
            if(mp.find(v[i])==mp.end())
            {
                q.push(v[i]);
                Node *t=new Node();
                t->val=v[i]->val;
                mp[v[i]]=t;
            }
            
            mp[u]->neighbors.push_back(mp[v[i]]);
        }
    }
    
return mp[node];
}

int main()
{
    boost;
return 0;
}