#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Merge overlapping subintervals

void mergeIntervals(vector<pair<int,int>> v)
{
    if(v.empty())
        return;

    stack<pair<int,int>> s;

    sort(v.begin(),v.end());
    s.push(v[0]);

    for(auto it=v.begin()+1;it!=v.end();it++)
    {
        if(it->first>s.top().second)
            s.push(*it);
        else if(it->second>s.top().second)
            s.top().second=it->second;
    }

    stack<pair<int,int>> res;
    while(!s.empty())
    {
        res.push(s.top());
        s.pop();
    }

    while(!res.empty())
    {
        cout<<res.top().first<<" "<<res.top().second<<" ";
        res.pop();
    }

return;
}

int main()
{
    boost;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        mergeIntervals(v);
        
        cout<<"\n";
    }
return 0;
}