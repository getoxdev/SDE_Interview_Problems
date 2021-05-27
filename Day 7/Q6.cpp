#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Max continuous number of 1s

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int sum=0,curr=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            curr++;
            sum=max(sum,curr);
        }
        else
            curr=0;
    }
        
    cout<<sum;
return 0;
}