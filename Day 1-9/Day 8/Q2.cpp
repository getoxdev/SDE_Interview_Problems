#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Activity Selection

static bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}

int maxActivity(int start[], int end[], int n)
{
    vector<pair<int,int>> p;
    
    for(int i=0;i<n;i++)
        p.push_back({start[i],end[i]});
        
    sort(p.begin(),p.end(),cmp);
    
    int ct=1,f=p[0].second;
    
    for(int i=1;i<p.size();i++)
    {
        if(p[i].first>f)
        {
            ct++;
            f=p[i].second;
        }
    }
    
return ct;
}

int main()
{
    boost;
    int n;
    cin>>n;
    int s[n],e[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cin>>e[i];

    maxActivity(s,e,n);
    
return 0;
}