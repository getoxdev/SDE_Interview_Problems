#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

bool isBipartite(int v, vector<int>adj[])
{
    vector<int> color(v,-1);
    
    for(int i=0;i<v;i++)
    {
        if(color[i]==-1)
        {
            queue<int> q;
            color[i]=0;
            q.push(i);
            
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                
                for(auto it=adj[node].begin();it!=adj[node].end();it++)
                {
                    if(color[*it]==-1)
                    {
                        color[*it]=1-color[node];
                        q.push(*it);
                    }
                    else
                    {
                        if(color[*it]==color[node])
                            return false;
                    }
                }
            }
        }
    }

return true;
}

int main()
{
    boost;
return 0;
}