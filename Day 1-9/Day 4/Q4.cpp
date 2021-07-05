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

    int sum=0,maxLen=0;
    unordered_map<int,int> mp;
    mp[0]=-1;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        if(mp.find(sum)==mp.end())
            mp[sum]=i;
        else
            maxLen=max(i-mp[sum],maxLen);
    }

    cout<<maxLen;
return 0;
}