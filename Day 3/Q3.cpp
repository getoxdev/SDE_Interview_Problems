#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Count trailing zeroes in factorial of a number

int main()
{
    boost;
    int n,count=0;
    cin>>n;

    for(int i=5;(n/i)>=1;i*=5)
        count+=n/i;

    cout<<count<<"\n";
return 0;
}