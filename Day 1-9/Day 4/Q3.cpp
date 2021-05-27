#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Longest Consecutive Sequence

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }    

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i]-1)==s.end())
        {
            int temp=a[i];
            while(s.find(temp)!=s.end())
                temp++;

            ans=max(ans,temp-a[i]);
        }
    }

    cout<<ans;
return 0;
}