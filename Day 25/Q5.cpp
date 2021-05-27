#include<iostream>
using namespace std;

int main() 
{
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
                if(i==0)
                    DP[i][j]=j;
                else if(j==0)
                    DP[i][j]=i;
                else if(a[i-1]==b[j-1])
                    DP[i][j]=DP[i-1][j-1];
                else
                    DP[i][j]=1+min(min(DP[i][j-1],DP[i-1][j]),DP[i-1][j-1]);
            }
        }
        
        cout<<DP[m][n]<<"\n";
    }
return 0;
}