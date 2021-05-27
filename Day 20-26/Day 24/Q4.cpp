#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Floyd Warshall Algorithm

void shortest_distance(vector<vector<int>> &mat)
{
    for(int v=0;v<mat.size();v++)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(mat[i][v]==-1 && mat[v][j]==-1)
                    mat[i][j]=min((mat[i][v]+mat[v][j]),mat[i][j]);
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