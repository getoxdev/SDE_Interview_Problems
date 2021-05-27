#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//3 Sum

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    set<vector<int>> temp;
    sort(a+0,a+n);

    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;
        
        while(j<k)
        {
            if(a[i]+a[j]+a[k]==0)
            {
                vector<int> v;
                v.push_back(a[i]);
                v.push_back(a[j]);
                v.push_back(a[k]);
                
                temp.insert(v);
                
                int x=a[j],y=a[k];
                while(j<k && a[j]==x)
                    j++;
                while(k>j && a[k]==y)
                    k--;
            }
            else if(a[i]+a[j]+a[k]<0)
                j++;
            else
                k--; 
        }
    }
    
    for(auto it=temp.begin();it!=temp.end();it++)
    {
        for(auto i=(*it).begin();i!=(*it).end();i++)
            cout<<*i<<" ";
            
        cout<<"\n";
    }

return 0;
}