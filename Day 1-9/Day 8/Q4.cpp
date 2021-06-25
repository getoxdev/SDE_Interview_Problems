#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Fractional Knapsack problem

struct Item{
    int value;
    int weight;
};

static bool cmp(Item a,Item b)
{
    double vala=double(a.value)/double(a.weight);
    double valb=double(b.value)/double(b.weight);
    
return vala>valb;
}

double fractionalKnapsack(int w,Item a[],int n)
{
    sort(a+0,a+n,cmp);
    
    double val=0;
    for(int i=0;i<n;i++)
    {
        if(w>=a[i].weight)
        {
            w-=a[i].weight;
            val+=double(a[i].value);
        }
        else
        {
            val+=(double(a[i].value)/double(a[i].weight))*double(w);
            w=0;
            break;
        }
    }
    
return val;
}

int main()
{
    boost;
    int w;
    cin>>w;
    int n;
    cin>>n;
    Item a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].value>>a[i].weight;
    
    cout<<fractionalKnapsack(w,a,n);
    
return 0;
}