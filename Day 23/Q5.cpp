#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

void topoSortUtil(int v,bool visit[],vector<int> g[],stack<int> &s)
{
    visit[v]=true;
    
    for(auto it=g[v].begin();it!=g[v].end();it++)
    {
        if(!visit[*it])
            topoSortUtil(*it,visit,g,s);
    }
    
    s.push(v);
    
return;
}

vector<int> topoSort(int v, vector<int> g[]) {
    vector<int> res;
    stack<int> s;
    
    bool visit[v];
    memset(visit,false,sizeof(visit));
    
    for(int i=0;i<v;i++)
    {
        if(!visit[i])
            topoSortUtil(i,visit,g,s);
    }
    
    while(!s.empty())
    {
        res.push_back(s.top());
        s.pop();
    }
    
return res;
}

int main()
{
    boost;
return 0;
}