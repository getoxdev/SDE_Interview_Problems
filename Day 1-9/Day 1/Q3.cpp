#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Repeat and Missing Number

void repmis(int a[],int n)
{
    int i=0;
    while(i<n)
    {
        if(a[a[i]-1]!=a[i])
            swap(a[i],a[a[i]-1]);
        else
            i++;
    }

    vector<int> rep,mis;    
    for(i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            rep.push_back(a[i]);
            mis.push_back(i+1);
        }
    }

return;
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

    repmis(a,n);
return 0;
}