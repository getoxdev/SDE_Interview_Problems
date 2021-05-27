#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Trapping Rainwater

int main()
{
    boost;
    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
        cin>>h[i];

    int l=0,r=n-1;
        
    int ans=0,lmax=INT_MIN,rmax=INT_MIN;
    while(l<r)
    {
        if(h[l]<h[r])
        {
            if(h[l]>=lmax)
                lmax=h[l];
            else
                ans+=lmax-h[l];
                
            l++;
        }
        else
        {
            if(h[r]>=rmax)
                rmax=h[r];
            else
                ans+=rmax-h[r];
            
            r--;
        }
    }
        
    cout<<ans;
return 0;
}