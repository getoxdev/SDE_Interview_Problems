#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Palindrome Partitioning (Using MCM)
bool isPalin(string s,int i,int j)
{
    while(i<=j)
    {
        if(s[i]!=s[j])
            return false;

        i++;
        j--;
    }

return true;
}

int DP[1002][1002];

int solvePal(string s,int i,int j)
{
    if(i>=j)
        return 0;
        
    if(isPalin(s,i,j))
        return 0;
        
    if(DP[i][j]!=-1)
        return DP[i][j];
    
    int ans=INT_MAX;
    
    int left,right,temp;
    for(int k=i;k<j;k++)
    {
        //Optimization
        if(DP[i][k]!=-1)
            left=DP[i][k];
        else
            left=solvePal(s,i,k);
            
        if(DP[k+1][j]!=-1)
            right=DP[k+1][j];
        else
            right=solvePal(s,k+1,j);
            
        temp=1+left+right;
        
        ans=min(ans,temp);
    }
    
return DP[i][j]=ans;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    memset(DP,-1,sizeof(DP));
	    string s;
	    cin>>s;
	    cout<<solvePal(s,0,s.size())<<"\n";
	}
return 0;
}