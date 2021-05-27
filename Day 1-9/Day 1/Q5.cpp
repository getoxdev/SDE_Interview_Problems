#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Kadane's Algorithm

void notKadane(int a[],int n)
{
    int maxx=a[0];
    int curr=a[0];

    for(int i=1;i<n;i++)
    {
        curr=max(a[i],curr+a[i]);
        maxx=max(maxx,curr);
    }

    cout<<maxx<<" ";
}

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    notKadane(a,n);
return 0;
}