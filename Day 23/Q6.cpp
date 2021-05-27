#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Number of Islands

void dfs(vector<vector<char>> &grid,int i,int j)
{
    if((i<0) || (i>=grid.size()) || (j<0) || (j>=grid[0].size()) || grid[i][j]=='0')
        return;

    grid[i][j]='0';
    
    dfs(grid,i-1,j);
    dfs(grid,i+1,j);
    dfs(grid,i,j-1);
    dfs(grid,i,j+1);
    
return;
}

int numIslands(vector<vector<char>> &grid) 
{
    int m=grid.size(),n=grid[0].size();
    int ct=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]=='1')
            {
                dfs(grid,i,j);
                ct++;
            }
        }
    }

return ct;
} 

int main()
{
    boost;
return 0;
}