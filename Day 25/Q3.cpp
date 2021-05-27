#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Longest Common Subsequence Bottom-Up DP
int main()
{
    boost;
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        string a,b;
        cin>>a>>b;

        int DP[m+2][n+2];
        
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    DP[i][j]=0;
            }
        }
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(a[i-1]==b[j-1])
                    DP[i][j]=1+DP[i-1][j-1];
                else
                    DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
            }
        }
        
        cout<<DP[m][n]<<"\n";
    }
return 0;
}