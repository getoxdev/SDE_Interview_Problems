#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Subset Sum-1

void subsetSumsUtil(vector<int> a,vector<int> &res,int sum,int ind)
{
    if(ind==a.size())
    {
        res.push_back(sum);
        return;
    }
        
    //Choosing the element
    subsetSumsUtil(a,res,sum+a[ind],ind+1);
    //Not choosing the element
    subsetSumsUtil(a,res,sum,ind+1);
    
return;
}

vector<int> subsetSums(vector<int> a, int n)
{
    vector<int> res;
    subsetSumsUtil(a,res,0,0);
    
    sort(res.begin(),res.end());
return res;
}

int main()
{
    boost;
return 0;
}