#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Sudoku

bool isSafe(vector<vector<int>> &m,int r,int c,int num)
{       
    for(int i=0;i<9;i++)
    {
        if(m[i][c]==num && i!=r)
            return false;
        
        if(m[r][i]==num && i!=c)
            return false;
    }

    int sR=r-(r%3),sC=c-(c%3);
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(m[i+sR][j+sC]==num && (i+sR)!=r && (j+sC)!=c)
                return false;    
        }  
    }

return true;
}

bool solveUtil(vector<vector<int>> &m)
{
    for (int i=0;i<9;i++)
    {
        for (int j=0;j<9;j++)
        {
            if(m[i][j]==0)
            {
                for(int num=1;num<=9;num++)
                {
                    if(isSafe(m,i,j,num))
                    {
                        m[i][j]=num;
                    
                        if(solveUtil(m))
                            return true;
                        else
                            m[i][j]=0;   
                    }
                }
                return false;
            }
        }
    }
    
return true;
}

void solveSudoku(vector<vector<char>>& board) 
{
    vector<vector<int>> m(9,vector<int>(9));
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]=='.')
                m[i][j]=0;
            else
                m[i][j]=int(board[i][j])-48;
        }
    }
    
    solveUtil(m);
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
            board[i][j]=char(m[i][j]+48);
    }
    
return;
}

int main()
{
    boost;
return 0;
}