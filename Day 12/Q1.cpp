#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Check if a number is a power of 2 or not in O(1) time

bool isPowerOf2(int n)
{
    if(n==0)
        return false;

return (n&(n-1))?false:true;
}

int main()
{
    boost;
    int n;
    cin>>n;
    
    if(isPowerOf2(n))
        cout<<"True";
    else
        cout<<"False";
    
return 0;
}