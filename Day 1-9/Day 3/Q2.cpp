#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find n^x in O(logn) time

int powerN(int n,int x)
{
    if(x==0)
        return 1;
    
    if(x%2==0)
        return powerN(n,x/2)*powerN(n,x/2);
    else
        return n*powerN(n,x/2)*powerN(n,x/2);
} 

int powerlogN(int n,int x)
{
    if(x==0)
        return 1;

    int temp=powerlogN(n,x/2);

    if(x%2==0)
        return temp*temp;
    else
        return n*temp*temp;
}

int main()
{
    boost;
    int n,x;
    cin>>n>>x;

    cout<<powerlogN(n,x);
return 0;
}