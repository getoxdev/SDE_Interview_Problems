#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//MST using Kruskal's Algo

struct nodeMST
{
    int u;
    int v;
    int wt;

    nodeMST(int first,int second,int weight)
    {
        u=first;
        v=second;
        wt=weight;
    }
};

static bool comp(nodeMST a,nodeMST b)
{
    return a.wt<b.wt;
}

int findParent(int node,vector<int> &parent)
{
    if(node==parent[node])
        return node;
    
return parent[node]=findParent(parent[node],parent); //Path Compression
}

void unionByRank(int u,int v,vector<int> &parent,vector<int> &rank)
{
    u=findParent(u,parent),v=findParent(v,parent);

    //Union by Rank
    if(rank[u]<rank[v])
        parent[u]=v;
    else if(rank[v]<rank[u])
        parent[v]=u;
    else
    {
        parent[v]=u;
        rank[u]++;
    }

return;
}

void kruskalMST(int v,vector<pair<int,int>> adj[])
{
    vector<nodeMST> edges;
    for(int i=0;i<v;i++)
    {
        for(auto it=adj[i].begin();it!=adj[i].end();it++)
            edges.push_back(nodeMST(i,(*it).first,(*it).second));
    }

    sort(edges.begin(),edges.end(),comp);

    vector<int> parent(v);
    vector<int> rank(v,0);

    for(int i=0;i<v;i++)
        parent[i]=i;

    vector<pair<int,int>> mst;
    for(auto it=edges.begin();it!=edges.end();it++)
    {
        if(findParent((*it).u,parent)!=findParent((*it).v,parent))
        {
            mst.push_back({(*it).u,(*it).v});
            unionByRank((*it).u,(*it).v,parent,rank);
        }
    }

return;
}

int main()
{
    boost;
return 0;
}