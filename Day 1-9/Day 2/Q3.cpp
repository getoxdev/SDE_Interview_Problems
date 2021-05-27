#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Next Permutation

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

    int index=0,flag=-1;
    for(int i=n-1;i>0;i--)
    {
        if(a[i-1]<a[i])
        {
            flag=1;
            index=i-1;
            break;
        }
    }

    if(flag==-1)
    {
        for(int i=0;i<n/2;i++)
            swap(a[i],a[n-1-i]);
    }
    else
    {
        int ind=n-1;
        for(int i=index+1;i<n;i++)
        {
            if(a[i]>a[index])
                ind=i;
            else
                break;
        }

        swap(a[index],a[ind]);
        sort(a+index+1,a+n);
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

return 0;
}