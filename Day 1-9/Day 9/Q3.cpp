#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//M-Coloring Problem

bool isPossible(bool graph[101][101],int node,int v,int m,vector<int> &color)
{
    for(int i=0;i<v;i++)
    {
        if(color[i]==m && graph[node][i]==1 && i!=node)
            return false;
    }

return true;
}

bool coloring(bool graph[101][101],int node,int v,int m,vector<int> &color)
{
    if(node==v)
        return true;
        
    for(int i=1;i<=m;i++)
    {
        if(isPossible(graph,node,v,i,color))
        {
            color[node]=i;
            
            if(coloring(graph,node+1,v,m,color))
                return true;
                
            color[node]=0;
        }
    }
    
return false;
}

//Function to determine if graph can be coloured with at most m colours such
//that no two adjacent vertices of graph are coloured with same colour.
bool graphColoring(bool graph[101][101], int m, int v)
{
    vector<int> color(v,0);
    
return coloring(graph,0,v,m,color);
}

int main()
{
    boost;
return 0;
}