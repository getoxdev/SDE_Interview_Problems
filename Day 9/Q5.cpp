#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Print all permutations of a String/Array

void recurNaive(vector<int> a,vector<int> &temp,map<int,int> &mp,vector<vector<int>> &res)
{
    if(temp.size()==a.size())
    {
        res.push_back(temp);
    return;
    }
    
    for(int i=0;i<a.size();i++)
    {
        if(mp[a[i]]==0)
        {
            temp.push_back(a[i]);
            mp[a[i]]=1;
            recurNaive(a,temp,mp,res);
            mp[a[i]]=0;
            temp.pop_back();
        }
    }
    
return;
}

void recurOpti(vector<int> &a,int ind,vector<vector<int>> &res)
{
    if(ind==a.size())
    {
        res.push_back(a);
    return;
    }
    
    for(int i=ind;i<a.size();i++)
    {
        swap(a[ind],a[i]);
        recurOpti(a,ind+1,res);
        swap(a[ind],a[i]);
    }
    
return;
}

int main()
{
    boost;
return 0;
}