#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Next Greater Element

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

    vector<int> v;
    stack<int> s;

    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.top()>a[i])
        {
            v.push_back(s.top());
        }
        else if(s.top()<=a[i])
        {
            while(s.size()>0 && s.top()<=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }

    reverse(v.begin(),v.end());

    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
return 0;
}