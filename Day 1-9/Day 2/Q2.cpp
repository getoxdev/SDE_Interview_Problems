#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Pascal's Triangle

void betterPascal(int n)
{
    int a[n][n];

    for(int line=0;line<n;line++)
    {
        for(int i=0;i<=line;i++)
        {
            if(line==i || i==0)
                a[line][i]=1;
            else
                a[line][i]=a[line-1][i-1]+a[line-1][i];
                
            cout<<a[line][i]<<" ";
        }
        cout<<"\n";
    }

return;
}

void optimisedPascal(int n)
{
    for(int line=1;line<=n;line++)
    {
        int c=1;
        for(int i=1;i<=line;i++)
        {
            cout<<c<<" ";
            c=(c*(line-i))/i;
        }
        cout<<"\n";
    }

return;
}

int main()
{
    boost;
    int n;
    cin>>n;
    optimisedPascal(n);
return 0;
}