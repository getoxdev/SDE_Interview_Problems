#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Greedy algo to find minimum number of coins

int minCoins(int v)
{
    int denom[] = {1,2,5,10,20,50,100,500,2000};

    int c=0;
    for(int i=8;i>=0;i--)
    {
        while(v>=denom[i])
        {   
            v-=denom[i];
            c++;
        }
    }

return c+v;
}

int main()
{
    boost;
    int v;
    cin>>v;
    cout<<minCoins(v);
return 0;
}