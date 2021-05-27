#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define R 1000
#define C 1000
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Set matrix zeroes

int main()
{
    boost;
    int r,c;
    cin>>r>>c;
    
    int m[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>m[i][j];
    }

    int row[r]={0},col[c]={0};
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(m[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(row[i]==1||col[j]==1)
                m[i][j]=1;
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<m[i][j]<<" ";

        cout<<"\n";
    }
return 0;
}