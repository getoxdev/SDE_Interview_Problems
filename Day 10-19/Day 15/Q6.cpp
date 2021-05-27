#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

vector<int> rabinKarp(string pat, string txt)
{
    vector<int> res;
    int m=pat.size(),n=txt.size(),j,p=0,t=0,h=1;

    if(m>n)
        return res;
    else if(m==n)
    {
        if(pat==txt)
            res.push_back(0);
    return res;
    }

    for(int i=1;i<=m-1;i++)  
        h=(h*256)%101;

    for(int i=0;i<m;i++)
    {
        p = ((256*p) + int(pat[i]))%101;
        t = ((256*t) + int(txt[i]))%101;
    }

    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            for(j=0;j<m;j++)
            {
                if(pat[j]!=txt[i+j])
                    break;
            }

            if(j==m)
                res.push_back(i);
        }

        if(i<n-m)
        {
            t = ((t - txt[i]*h)*256 + txt[i+m])%101;
        
            if(t<0)
                t+=101;        
        }
    }

return res;
}

int main()
{
    boost;
    string pat,txt;
    cin>>txt>>pat;

    vector<int> ans = rabinKarp(pat,txt);
    for(auto it=ans.begin();it!=ans.end();it++)
        cout<<*it<<" ";

return 0;
}