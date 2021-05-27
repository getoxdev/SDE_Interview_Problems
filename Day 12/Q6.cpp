#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find square of a number without using multiplication or division operators

int sqr(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    if(n<0)
        n= -n;

    int x = floor(n>>1);

    if(n&1)
        return (sqr(x)<<2)+(x<<2)+1;
    else
        return (sqr(x)<<2);
}

int main()
{
    boost;
    int n;
    cin>>n;

    cout<<sqr(n);
return 0;
}