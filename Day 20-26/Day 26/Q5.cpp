#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Egg Dropping

int DP[12][52];
int solveEgg(int e,int f)
{
    if(e==1)
        return f;
        
    if(f==0||f==1)
        return f;
        
    if(DP[e][f]!=-1)
        return DP[e][f];
    
    int minn=INT_MAX,eb,edb;
    
    for(int k=1;k<=f;k++)
    {
        if(DP[e-1][k-1]!=-1)
            eb=DP[e-1][k-1];
        else
        {
            eb = solveEgg(e-1,k-1);
            DP[e-1][k-1]=eb;
        }
        
        if(DP[e][f-k]!=-1)
            edb=DP[e][f-k];
        else
        {
            edb = solveEgg(e,f-k);
            DP[e][f-k]=edb;
        }
        
        int temp=1+max(eb,edb);
        
        minn=min(temp,minn);
    }
    
return DP[e][f]=minn;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,f;
	    cin>>n>>f;
	    
	    memset(DP,-1,sizeof(DP));
	    cout<<solveEgg(n,f)<<"\n";
	}
return 0;
}