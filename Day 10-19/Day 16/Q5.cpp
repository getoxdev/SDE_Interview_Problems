#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

string countAndSay(int n) 
{
    vector<string> DP(n+2);
    
    DP[0]="0";
    DP[1]="1";
    
    for(int i=2;i<=n;i++)
    {
        string temp = DP[i-1]+'$';
        int siz = DP[i-1].size();
        
        int ct=1;
        for(int j=1;j<siz+1;j++)
        {
            if(temp[j]!=temp[j-1])
            {
                (DP[i]).push_back(ct+'0');
                (DP[i])+=temp[j-1];
                ct=1;
            }
            else
                ct++;
        }
    }
    
return DP[n];
}

int main()
{
    boost;
return 0;
}