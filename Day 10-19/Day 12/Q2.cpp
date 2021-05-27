#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Count total set bits

int totalBits(int n)
{
    int i=0;
    int ct=0;

    while(n>=(1<<i))
    {
        int k=0;
        int change=1<<i;

        for(int j=0;j<=n;j++)
        {
            ct+=k;

            if(change==1)
            {
                k=!k;
                change=1<<i;
            }
            else
                change--;
        }

        i++;
    }

return ct;
}

int main()
{
    boost;
    int n;
    cin>>n;
    cout<<totalBits(n);
return 0;
}