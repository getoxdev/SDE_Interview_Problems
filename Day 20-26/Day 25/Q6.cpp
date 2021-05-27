#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    lli a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	    lli sum[n];
	    sum[0]=a[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        sum[i]=a[i];
	        for(int j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && sum[i]<sum[j]+a[i])
	                sum[i]=sum[j]+a[i];
	        }
	    }
	    
	    cout<<*max_element(sum,sum+n)<<"\n";
	}
return 0;
}