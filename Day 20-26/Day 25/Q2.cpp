#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	    int lis[n];
	    lis[0]=1;
	    
	    for(int i=1;i<n;i++)
	    {
	        lis[i]=1;
	        for(int j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && lis[i]<lis[j]+1)
	                lis[i]=lis[j]+1;
	        }
	    }
	    
	    cout<<*max_element(lis,lis+n)<<"\n";
	}
return 0;
}