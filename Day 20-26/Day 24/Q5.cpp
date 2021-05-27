#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//MST using Prim's Algorithm

void primMST(int v,vector<pair<int,int>> adj[])
{
    vector<int> parent(v,-1);
    vector<int> key(v,INT_MAX);
    vector<bool> mst(v,false);

    key[0]=0;
    parent[0]=-1;
    for(int i=1;i<v;i++)
    {
        int mn=INT_MAX,ind;
        for(int j=0;j<v;j++)
        {
            if(mst[i]==false && key[i]<mn)
            {
                mn=key[i];
                ind=j;
            }
        }

        mst[ind]=true;

        for(auto it=adj[ind].begin();it!=adj[ind].end();it++)
        {
            int node=(*it).first;
            int wgt=(*it).second;

            if(mst[node]==false && key[node]>wgt)
            {
                parent[node]=ind;
                key[node]=wgt;
            }
        }
    }

return;
}

void primMSTOpti(int v,vector<pair<int,int>> adj[])
{
    vector<int> parent(v,-1);
    vector<int> key(v,INT_MAX);
    vector<bool> mst(v,false);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
    key[0]=0;
    parent[0]=-1;
    minh.push({0,0});

    for(int i=1;i<v;i++)
    {
        int ind=minh.top().second;
        minh.pop();

        mst[ind]=true;

        for(auto it=adj[ind].begin();it!=adj[ind].end();it++)
        {
            int node=(*it).first;
            int wgt=(*it).second;

            if(mst[node]==false && key[node]>wgt)
            {
                parent[node]=ind;
                key[node]=wgt;
                minh.push({key[node],node});
            }
        }
    }

return;
}

int main()
{
    boost;
return 0;
}