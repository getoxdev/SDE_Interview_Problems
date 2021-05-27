#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Count number of subarrays with given XOR

int main()
{
    boost;
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>m;

    int xorA[n];
    xorA[0]=a[0];
    for(int i=1;i<n;i++)
        xorA[i]=xorA[i-1]^a[i];
    
    map<int,int> mp;

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int temp = xorA[i]^m;

        ans+= ((ll)(mp[temp]));

        if(xorA[i]==m)
            ans++;

        mp[xorA[i]]++;
    }

    cout<<ans;
return 0;
}