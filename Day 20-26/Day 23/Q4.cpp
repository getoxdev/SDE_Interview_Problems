#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

bool isCyclicUDUtil(vector<int> g[],int v,bool visit[],int parent)
{
    visit[v]=true;
    
    for(auto it=g[v].begin();it!=g[v].end();it++)
    {
        if(!visit[*it])
        {
            if(isCyclicUDUtil(g,*it,visit,v))
                return true;
        }
        else if(*it!=parent)
            return true;
    } 
}  

bool isCyclicUD(vector<int> g[], int v)
{
    bool visit[v];
    memset(visit,false,sizeof(visit));
    
    for(int i=0;i<v;i++)
    {
        if(!visit[i])
        {
            if(isCyclicUDUtil(g,i,visit,-1))
                return true;
        }
    }

return false;
}

bool isCyclicDUtil(vector<int> g[],int v,bool visit[],bool revisit[])
{
    if(visit[v]!=true)
    {
        visit[v]=true;
        revisit[v]=true;

        for(auto it=g[v].begin();it!=g[v].end();it++)
        {
            if(!visit[*it])
            {
                if(isCyclicDUtil(g,*it,visit,revisit))
                return true;
            }
            else if(revisit[*it])
                return true;
        }
    }

    revisit[v]=false;
return false;
}

bool isCyclicD(vector<int> g[],int v)
{
    bool visit[v],revisit[v];
    memset(visit,false,sizeof(visit));
    memset(revisit,false,sizeof(revisit));

    for(int i=0;i<v;i++)
    {
        if(isCyclicDUtil(g,i,visit,revisit))
            return true;
    }

return false;
}

int main()
{
    boost;
return 0;
}