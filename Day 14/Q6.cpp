#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Rotten Oranges (Using BFS)

bool isValid(int i, int j, int R, int C)
{
    return (i >= 0 && j >= 0 && i < R && j < C);
}

int orangesRotting(vector<vector<int>>& grid) 
{
    queue<pair<int,int>> q;
    int ans=0,m=grid.size(),n=grid[0].size();

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==2)
                q.push({i,j});
        }
    }

    q.push({-1,-1});

    while(!q.empty())
    {
        bool flag=false;

        while(q.front().first!=-1 && q.front().second!=-1)
        {
            int x=q.front().first,y=q.front().second;

            if(isValid(x+1,y,m,n) && grid[x+1][y]==1)
            {
                if(!flag)
                {
                    ans++;
                    flag=true;
                }

                grid[x+1][y]=2;

                q.push({x+1,y});
            }
    
            if(isValid(x-1,y,m,n) && grid[x-1][y]==1)
            {
                if(!flag)
                {
                    ans++;
                    flag=true;
                }

                grid[x-1][y]=2;

                q.push({x-1,y});
            }

            if(isValid(x,y+1,m,n) && grid[x][y+1]==1)
            {
                if(!flag)
                {
                    ans++;
                    flag=true;
                }

                grid[x][y+1]=2;

                q.push({x,y+1});
            }

            if(isValid(x,y-1,m,n) && grid[x][y-1]==1)
            {
                if(!flag)
                {
                    ans++;
                    flag=true;
                }

                grid[x][y-1]=2;

                q.push({x,y-1});
            }

            q.pop();
        }

        q.pop();

        if(!q.empty())
            q.push({-1,-1});
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
                return -1;
        }
    }

return ans;    
}

int main()
{
    boost;
return 0;
}