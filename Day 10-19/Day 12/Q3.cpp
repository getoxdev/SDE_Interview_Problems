#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Divide integers without / operator

ll divide(ll dividend,ll divisor)
{
    ll sign = ((dividend<0)^(divisor<0))?-1:1;

    dividend = abs(dividend);
    divisor = abs(divisor);

    ll quotient=0,temp=0;

    for(ll i=31;i>=0;i--)
    {
        if((temp+(divisor<<i))<=dividend)
        {
            temp+=divisor<<i;
            quotient|=1LL<<i;
        }
    }

return sign*quotient;
}

int main()
{
    boost;
    int a,b;
    cin>>a>>b;
    cout<<divide(a,b);
return 0;
}