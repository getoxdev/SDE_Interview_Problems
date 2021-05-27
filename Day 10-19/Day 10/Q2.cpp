#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Combination Sum-2

void comSumNaive(vector<int> &a,int index,int t,vector<int> &temp,set<vector<int>> &res)
{
    if(index==a.size())
    {
        if(t==0)
            res.insert(temp);

        return;
    }

    //Choosing the element
    if(a[index]<=t)
    {
        temp.push_back(a[index]);
        comSumNaive(a,index+1,t-a[index],temp,res);
        temp.pop_back();
    }

    //Not choosing the element
    comSumNaive(a,index+1,t,temp,res);

return;
}

void comSumOpti(vector<int> &a,int ind,int t,vector<int> &temp,vector<vector<int>> &res)
{
    if(t==0)
        res.push_back(temp);
    
    for(int i=ind;i<a.size();i++)
    {
        if(i!=0 && a[i]==a[i-1] && i>ind)
            continue;
        
        if(a[i]>t)
            break;
        
        temp.push_back(a[i]);
        comSumOpti(a,i+1,t-a[i],temp,res);
        temp.pop_back();
    }

return;
}

vector<vector<int>> combinationSum2(vector<int> &a, int target) 
{
    sort(a.begin(),a.end());
    vector<vector<int>> res;
    vector<int> temp;
    
    comSumOpti(a,0,target,temp,res);
    
return res;   
}

int main()
{
    boost;
return 0;
}