#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Breadth First Search

vector<int> bfs(vector<int> g[],int v)
{
    vector<int> res;
    
    bool visit[v];
    memset(visit,false,sizeof(visit));
    
    queue<int> gq;
    
    visit[0]=true;
    gq.push(0);
    
    while(!gq.empty())
    {
        int i=gq.front();
        res.push_back(i);
        gq.pop();
        
        for(auto it=g[i].begin();it!=g[i].end();it++)
        {
            if(!visit[*it])
            {
                gq.push(*it);
                visit[*it]=true;
            }
        }
    }

return res;
}

int main()
{
    boost;
return 0;
}