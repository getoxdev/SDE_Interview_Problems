#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//N Queens problem

const int n = 11;
bool isSafe(int m[n][n],int r,int c,int s)
{
    for(int j=0;j<c;j++)
    {
        if(m[r][j])
            return false;
    }

    for(int i=r,j=c;i>=0 && j>=0;i--,j--)
    {
        if(m[i][j])
            return false;
    }

    for(int i=r,j=c;i<s && j>=0;i++,j--)
    {
        if(m[i][j])
            return false;
    }

return true;
}

bool solveUtil(int m[n][n],int c,int s)
{
    //Print your chessboard here
    if(c>=s)
        return true;

    bool r = false;
    for(int i=0;i<s;i++)
    {
        if(isSafe(m,i,c,s))
        {
            m[i][c]=1;
            r = solveUtil(m,c+1,s) || r;
            m[i][c]=0;
        }
    }

return r;
}

int main()
{
    boost;
return 0;
}