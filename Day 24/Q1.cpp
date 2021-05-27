#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//SCC using Kosaraju's Algo

void topoSort(int node,vector<int> adj[],vector<int> &visit,stack<int> &s)
{
    visit[node]=1;

    for(auto it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(visit[*it]==0)
            topoSort(*it,adj,visit,s);
    }
    s.push(node);

return;
}

void dfs(int node,vector<int> adj[],vector<int> &visit,vector<int> &t)
{
    t.push_back(node);
    visit[node]=1;

    for(auto it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(visit[*it]==0)
            dfs(*it,adj,visit,t);
    }

return;
}

void kosarajuSCC(int v,vector<int> adj[])
{
    stack<int> s;
    vector<int> visit(v,0);

    for(int i=0;i<v;i++)
    {
        if(visit[i]==0)
            topoSort(i,adj,visit,s);
    }

    vector<int> transpose[v];
    for(int i=0;i<v;i++)
    {
        visit[i]=0;
        for(auto it=adj[i].begin();it!=adj[i].end();it++)
            transpose[*it].push_back(i);
    }

    vector<vector<int>> res;
    while(!s.empty())
    {
        int x=s.top();
        s.pop();

        if(visit[x]==0)
        {
            vector<int> t;
            dfs(x,transpose,visit,t);
            res.push_back(t);
        }
    }

return;
}

int main()
{
    boost;
return 0;
}