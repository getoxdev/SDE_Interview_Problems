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
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    int k,l;
    for(k=n-2;k>=0;k--)
    {
        if(a[k]<a[k+1])
            break;
    }
    
    if(k<0)
        reverse(a.begin(),a.end());
    else
    {
        for(l=n-1;l>=0;l--)
        {
            if(a[l]>a[k])
                break;
        }
            
        swap(a[l],a[k]);
        reverse(a.begin()+k+1,a.end());
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

return 0;
}