#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Rat in a Maze

void solvePath(int i,int j,vector<vector<int>> m,vector<vector<int>> &visit,string temp,vector<string> &res)
{
    if(i==m.size()-1 && j==m.size()-1)
    {
        if(!temp.empty())
            res.push_back(temp);
            
        return;
    }
    
    //Left
    if((j-1)>=0 && m[i][j-1]==1 && visit[i][j-1]==0)
    {
        visit[i][j]=1;
        solvePath(i,j-1,m,visit,temp+'L',res);
        visit[i][j]=0;
    }
    
    //Right
    if((j+1)<m.size() && m[i][j+1]==1 && visit[i][j+1]==0)
    {
        visit[i][j]=1;
        solvePath(i,j+1,m,visit,temp+'R',res);
        visit[i][j]=0;
    }
    
    //Up
    if((i-1)>=0 && m[i-1][j]==1 && visit[i-1][j]==0)
    {
        visit[i][j]=1;
        solvePath(i-1,j,m,visit,temp+'U',res);
        visit[i][j]=0;
    }
    
    //Down
    if((i+1)<m.size() && m[i+1][j]==1 && visit[i+1][j]==0)
    {
        visit[i][j]=1;
        solvePath(i+1,j,m,visit,temp+'D',res);
        visit[i][j]=0;
    }
    
return;
}

vector<string> findPath(vector<vector<int>> &m, int n) 
{
    vector<string> res;
    vector<vector<int>> visit(n,vector<int>(n,0));
    
    if(m[0][0]==1)
        solvePath(0,0,m,visit,"",res);
        
    sort(res.begin(),res.end());
return res;
}

int main()
{
    boost;
return 0;
}