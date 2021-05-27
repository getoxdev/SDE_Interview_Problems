#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
int DP[102][102];

int solveMCM(int a[],int i,int j)
{
    if(i>=j)
        return 0;
        
    if(DP[i][j]!=-1)
        return DP[i][j];
        
    int minn=INT_MAX;
    
    for(int k=i;k<j;k++)
    {
        int temp= solveMCM(a,i,k) + solveMCM(a,k+1,j) + (a[i-1]*a[k]*a[j]);
        minn=min(temp,minn);
    }
    
return DP[i][j]=minn;
}

int main()
{
    boost;
    int t;
	cin>>t;
	while(t--)
	{
	    memset(DP,-1,sizeof(DP));
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	    cout<<solveMCM(a,1,n-1)<<"\n";
	}
return 0;
}