#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

int lcs(string a, string b)
{
    int m=a.size(),n=b.size();
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
        
return DP[m][n];
}

int main()
{
    boost;
    string a;
    cin>>a;
    reverse(a.begin(),a.end());
    string b=a;

    cout<<lcs(a,b);
return 0;
}