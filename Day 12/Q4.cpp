#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Power Set

void powerSet(int a[],int n)
{
    int powN = pow(2,n);

    for(int i=0;i<powN;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                cout<<a[j];
        }
        cout<<"\n";
    }
}
int main()
{
    boost;
    int a[3]={1,2,3};
    powerSet(a,3);
    
return 0;
}