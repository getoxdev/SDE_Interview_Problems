#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        ll minVal=a[0],maxVal=a[0],prod=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<0)
                swap(minVal,maxVal);
                
            maxVal=max(a[i],maxVal*a[i])%mod;
            minVal=min(a[i],minVal*a[i])%mod;
            
            prod=max(prod,maxVal)%mod;
        }
        
        cout<<prod<<"\n";
    }
return 0;
}