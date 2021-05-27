#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Subset sum

int main()
{
    boost;
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>sum;
    bool DP[n+2][sum+2];
    for(int i=1;i<sum+1;i++)
        DP[0][i]=false;
    
    for(int i=0;i<n+1;i++)
        DP[i][0]=true;
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(a[i-1]<=j)
            {
                DP[i][j]=DP[i-1][j-a[i-1]] || DP[i-1][j];
            }
            else
            {
                DP[i][j]=DP[i-1][j];
            }
        }
    }
    if(DP[n][sum])
    {
        cout<<"True";
    } 
    else
    {
        cout<<"False";
    }
return 0;
}