#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Word Break
int wordBreak(string s, vector<string> &b) 
{
    set<string> d;
    for(int i=0;i<b.size();i++)
        d.insert(b[i]);
        
    int n=s.size();
    int dp[n];
    memset(dp,0,sizeof(dp));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            string t=s.substr(j,i-j+1);
            if(d.find(t)!=d.end())
            {
                if(j==0)
                    dp[i]+=1;
                else
                    dp[i]+=dp[j-1];
            }
        }
    }
        
    if(dp[n-1]!=0)
        return true;
        
return false;
}

int main()
{
    boost;
return 0;
}