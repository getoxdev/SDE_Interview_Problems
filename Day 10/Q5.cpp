#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Subset Sum-2

void subsetSumsUtil(vector<int> a,int ind,vector<int> &temp,vector<vector<int>> &res)
{
    res.push_back(temp);
    
    for(int i=ind;i<a.size();i++)
    {
        if(i!=ind && a[i]==a[i-1])
            continue;
        
        temp.push_back(a[i]);
        subsetSumsUtil(a,i+1,temp,res);
        temp.pop_back();
    }
    
return;
}

vector<vector<int>> subsetsWithDup(vector<int> &a) 
{
    sort(a.begin(),a.end());
    vector<int> temp;
    vector<vector<int>> res;
    subsetSumsUtil(a,0,temp,res);
    
return res;
}

int main()
{
    boost;
return 0;
}