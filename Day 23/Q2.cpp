#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

void dfsUtil(vector<int> g[],int v,bool visit[])
{
    visit[v]=true;
    cout<<v<<" ";
    
    for(auto it=g[v].begin();it!=g[v].end();it++)
    {
        if(!visit[*it])
            dfsUtil(g,*it,visit);
    }
    
return;
}

void dfs(vector<int> g[], int v)
{
    bool visit[v];
    memset(visit,false,sizeof(visit));
    
    for(int i=0;i<v;i++)
    {
        if(!visit[i])
            dfsUtil(g,i,visit);    
    }
}
int main()
{
    boost;
return 0;
}