#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find MSB in O(1) time

int msb(int n)
{
    int k=floor(log2(n));

return 1<<k;
}

int main()
{
    boost;
    int n;
    cin>>n;
    cout<<msb(n);
return 0;
}