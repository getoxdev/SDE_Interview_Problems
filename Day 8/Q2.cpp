#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Activity Selection

struct activity
{
    int start;
    int end;
    int pos;
};

bool comparator(struct activity m1, struct activity m2)
{
    return (m1.end<m2.end);
}

void activityCheck(int s[],int f[],int n)
{
    struct activity meet[n];
    for(int i=0;i<n;i++)
    {
        meet[i].start=s[i];
        meet[i].end=f[i];
        meet[i].pos=i;
    }

    sort(meet,meet+n,comparator);

    vector<int> p;

    p.push_back(meet[0].pos);
    int limit=meet[0].end;

    for(int i=1;i<n;i++)
    {
        if(meet[i].start>=limit)
        {
            p.push_back(meet[i].pos);
            limit=meet[i].end;
        }
    }

    for(auto it=p.begin();it!=p.end();it++)
    {
        cout<<*it<<" ";
    }    
}

int main()
{
    boost;
    int n;
    cin>>n;
    int s[n],f[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }

    activityCheck(s,f,n);
    
return 0;
}