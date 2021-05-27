#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Buy and Sell Stock

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        vector<pair<int,int>> v;
        int i=0;
        
        while(i<n-1)
        {
            while((i<n-1) && (a[i+1]<=a[i]))
                i++;
                
            if(i==n-1)
                break;
            
            int buy = i++;
            
            while((i<n) && (a[i]>=a[i-1]))
                i++;
                
            int sell = i-1;
            
            v.push_back({buy,sell});
        }
        
        if(v.empty())
            cout<<"No Profit\n";
        else
        {
            for(auto it=v.begin();it!=v.end();it++)
            {
                cout<<'('<<it->first<<' '<<it->second<<") ";
            }
            cout<<"\n";
        }
    }

return 0;
}