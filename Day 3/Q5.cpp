#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Unique paths in a grid

int noOfPaths(int m,int n)
{
    int path=1;
    for(int i=n;i<m+n-1;i++)
    {
        path*=i;
        path/=(i-n+1);
    }

return path;
}

int main()
{
    boost;
    int m,n;
    cin>>m>>n;

    cout<<noOfPaths(m,n)<<"\n";
return 0;
}