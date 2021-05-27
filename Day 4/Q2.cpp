#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Four Sum problem

vector<vector<int>> fourSum(vector<int> &a, int k) 
{
    int n=a.size();
    if(n<4)
        return {{}};

    set<vector<int>> res;   
    multimap<int,pair<int,int>> mp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=a[i]+a[j];
            auto it=mp.equal_range(k-sum);
            
            for(auto itr=it.first;itr!=it.second;itr++)
            {
                pair<int,int> p=itr->second;
                if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
                {
                    vector<int> temp = {a[i],a[j],a[p.first],a[p.second]};
                    sort(temp.begin(),temp.end());
                    res.insert(temp);
                }
            }
            
            mp.emplace(sum,make_pair(i,j));
        }
    }
    
    vector<vector<int>> ans;
    for(auto itr=res.begin();itr!=res.end();itr++)
        ans.push_back(*itr);
    
return ans;
}

int main() 
{
    int n,k;
    cin>>n>>k;
    
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
            
return 0;
}