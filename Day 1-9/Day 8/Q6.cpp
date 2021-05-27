#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Job Sequencing problem

bool sortInDesc(const pair<int,int> &a, const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }

    vector<pair<int,int>> p;
    for(int i=0;i<n;i++)
    {
        p.push_back({c[i],b[i]});
    }

    sort(p.begin(),p.end(),sortInDesc);

    int res,x=1,ctr=1;
    res+=(p.begin())->first;
    for(auto it=p.begin()+1;it!=p.end();it++)
    {
        if(it->second>x)
        {
            ctr++;
            res+=it->first;
        }
    }

    cout<<ctr<<" "<<res<<"\n";
return 0;
}