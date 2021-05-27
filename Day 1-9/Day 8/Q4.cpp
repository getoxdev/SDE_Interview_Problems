#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Fractional Knapsack problem

struct knapsack
{
    int val;
    int wt;
    int ratio;
};

bool comparator(struct knapsack fk1,struct knapsack fk2)
{
    return (double(fk1.ratio)>double(fk2.ratio));
}

double fracKnapsack(int v[],int wt[],int w,int n)
{
    struct knapsack fk[n];
    double ratio[n];
    for(int i=0;i<n;i++)
    {
        ratio[i]=double(double(v[i])/double(wt[i]));
        fk[i].val=v[i];
        fk[i].wt=wt[i];
        fk[i].ratio=ratio[i];
    }

    sort(fk,fk+n,comparator);

    double maxval=0;
    for(int i=0;i<n;i++)
    {
        if(fk[i].wt<=w)
        {
            w-=fk[i].wt;
            maxval+=double(fk[i].val);
        }
        else
        {
            maxval+=(double(double(w)/double(fk[i].wt)))*double(fk[i].val);
            w-=w;
            break;
        }
    }

return maxval;
}

int main()
{
    boost;
    int w;
    cin>>w;
    int n;
    cin>>n;
    int v[n],wt[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i]>>wt[i];
    }
    
    cout<<fracKnapsack(v,wt,w,n);
return 0;
}