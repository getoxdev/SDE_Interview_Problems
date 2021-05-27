#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Coin change (Max no. of coins)

int main()
{
    boost;
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>sum;

    int t[n+2][sum+2];

    //Bottom-Up approach
    for(int i=0;i<n+1;i++)  //Sum is 0
            t[i][0]=1;
    for(int j=1;j<sum+1;j++)    //Array is empty
            t[0][j]=0;

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(a[i-1]<=j)
            {
                t[i][j]= t[i][j-a[i-1]]+t[i-1][j]; //t[i] allows choosing items repeatedly
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    
    cout<<t[n][sum];
return 0;
}