#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Longest subarray with sum 0

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int sum=0,max_len=0;
    map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        if(a[i]==0 && max_len==0)
            max_len=1;

        if(sum==0)
            max_len=i+1;
        else
        {
            if(mp.find(sum)!=mp.end())
                max_len=max(i-mp[sum],max_len);
            else
                mp[sum]=i;
        }
    }

    cout<<max_len;
return 0;
}