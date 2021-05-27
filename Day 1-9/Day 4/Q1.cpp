#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Two Sum problem

int main()
{
    boost;
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    set<int> s;
    int flag=-1;
    for(int i=0;i<n;i++)
    {
        int temp=x-a[i];
        if(s.find(temp)!=s.end())
        {
            flag=1;
            cout<<"Yes\n";
            break;
        }

        s.insert(a[i]);
    }

    if(flag==-1)
        cout<<"No\n";
return 0;
}