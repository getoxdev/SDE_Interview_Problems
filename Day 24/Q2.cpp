#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Dijkstra's Algorithm

void dijkstraAlgo(int v,vector<pair<int,int>> adj[],int s)
{
    vector<int> visit(v,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;

    vector<int> dist(v,INT_MAX);
    dist[s]=0;
    minh.push({0,s});

    while(!minh.empty())
    {
        int node=minh.top().second;
        minh.pop();

        for(auto it=adj[node].begin();it!=adj[node].end();it++)
        {
            int nextNode=(*it).first;
            int nextDist=(*it).second;

            if(dist[nextNode]>dist[node]+nextDist)
            {
                dist[nextNode]=dist[node]+nextDist;
                minh.push({dist[nextNode],nextNode});
            }
        }
    }

    for(int i=0;i<v;i++)
        cout<<dist[i]<<" ";

return;
}

int main()
{
    boost;
return 0;
}