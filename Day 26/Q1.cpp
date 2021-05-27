#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Maximum Path Sum in a Matrix

int main()
{
    boost;
    int m,n;
    cin>>m>>n;
    
    int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>0 && j<n-1)
                mat[i][j]+=max(mat[i-1][j],max(mat[i-1][j-1],mat[i-1][j+1]));
            else if(j>0)
                mat[i][j]+=max(mat[i-1][j],mat[i-1][j-1]);
            else if(j<n-1)
                mat[i][j]+=max(mat[i-1][j],mat[i-1][j+1]);
        }
    }

    cout<<*max_element(mat[m-1]+0,mat[m-1]+n);
    
return 0;
}