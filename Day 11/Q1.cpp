#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//nth root of an integer (Use Binary Search)

void nthroot(double x,int n)
{
    double low,high;
    if(x>=0 && x<=1)
    {
        low=x;
        high=1;
    }
    else if(x>1)
    {
        low=1;
        high=x;
    }
    else
    {
        cout<<"Nth Root not possible!";
        return;
    }
    
    double ep = 0.0001,g = (low+high)/2;

    while(abs(pow(g,n)-x)>=ep)
    {
        if(pow(g,n)>x)
            high=g;
        else
            low=g;

        g = (low+high)/2;
    }

    cout<<fixed<<setprecision(4)<<g;
return;
}

int main()
{
    boost;
    int n;
    double x;
    cin>>x>>n;
    nthroot(x,n);

return 0;
}