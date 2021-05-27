#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Rotate matrix

int main()
{
    boost;
    int m,n;
    cin>>m>>n;
    int mat[m][n];

    //Anti-clockwise
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }

    //Transpose
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<=i;j++)
            swap(mat[i][j],mat[j][i]);
    }

    //Reverse
    for(int i=0;i<(m/2);i++)
    {
        for(int j=0;j<n;j++)
            swap(mat[i][j],mat[m-1-i][j]);
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
return 0;
}