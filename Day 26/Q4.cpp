#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Rod cutting

int main()
{
    boost;
    int n;
    cin>>n;
    int len[n],prc[n];
    for(int i=0;i<n;i++)
        cin>>len[i];
    for(int i=0;i<n;i++)
        cin>>prc[i];

    int t[n+2][n+2];
    int x;

    //Bottom-Up approach
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
        }
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(len[i-1]<=j)
            {
                t[i][j]=max(prc[i-1]+t[i][j-len[i-1]],t[i-1][j]); //t[i] allows choosing items repeatedly
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    x=t[n][n];
    cout<<x;
return 0;
}