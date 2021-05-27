#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find GCD in O(logn) time

int gcdN(int x,int y)
{
    if(x==0)
        return y;
    if(y==0)
        return x;

    if(x==y)
        return x;

    if(x>y)
        return (x-y,y);
    else
        return (x,y-x);
}

int gcdlogN(int x,int y)
{
    if(x==0)
        return y;

return gcdlogN(y%x,x);
}

int main()
{
    boost;
    int x,y;
    cin>>x>>y;

    cout<<gcdlogN(x,y);
return 0;
}