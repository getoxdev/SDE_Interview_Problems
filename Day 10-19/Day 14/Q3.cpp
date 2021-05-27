#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Largest rectangle in histogram

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //NSR index
    vector<int> r;
    stack<pair<int,int>> sr;

    for(int i=n-1;i>=0;i--)
    {
        if(sr.size()==0)
        {
            r.push_back(n);
        }
        else if(sr.top().first<a[i])
        {
            r.push_back(sr.top().second);
        }
        else if(sr.top().first>=a[i])
        {
            while(sr.size()>0 && sr.top().first>=a[i])
            {
                sr.pop();
            }
            if(sr.size()==0)
            {
                r.push_back(n);
            }
            else
            {
                r.push_back(sr.top().second);
            }
        }
        sr.push({a[i],i});
    }

    reverse(r.begin(),r.end());

    //NSL index
    vector<int> l;
    stack<pair<int,int>> sl;
    
    for(int i=0;i<n;i++)
    {
        if(sl.size()==0)
        {
            l.push_back(-1);
        }
        else if(sl.top().first<a[i])
        {
            l.push_back(sl.top().second);
        }
        else if(sl.top().first>=a[i])
        {
            while(sl.size()>0 && sl.top().first>=a[i])
            {
                sl.pop();
            }
            if(sl.size()==0)
            {
                l.push_back(-1);
            }
            else
            {
                l.push_back(sl.top().second);
            }
        }
        sl.push({a[i],i});
    }

    vector<int> area;

    for(int i=0;i<n;i++)
    {
        area.push_back((r[i]-l[i]-1)*a[i]);
    }

    cout<<*max_element(area.begin(),area.end())<<"\n";
return 0;
}