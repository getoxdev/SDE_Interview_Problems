#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Bellman Ford Algorithm

bool negativeCycle(int n,vector<vector<int>> edges)
{
    vector<int> dist(n,INT_MAX);
    dist[0]=0;

    for(int i=0;i<n-1;i++)
    {
        for(auto it=edges.begin();it!=edges.end();it++)
        {
            int u=(*it)[0],v=(*it)[1],wt=(*it)[2];
            
            if(dist[u]!=INT_MAX)
                dist[v]=min(dist[u]+wt,dist[v]);
        }
    }

    for(auto it=edges.begin();it!=edges.end();it++)
    {
        int u=(*it)[0],v=(*it)[1],wt=(*it)[2];
        
        if(dist[u]!=INT_MAX && dist[u]+wt<dist[v])
            return true;
    }

return false;
}

int main()
{
    boost;
return 0;
}