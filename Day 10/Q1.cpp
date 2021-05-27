#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Combination Sum-1

void comSum(vector<int> &a,int index,int t,vector<int> &temp,vector<vector<int>> &ans)
{
    if(index==a.size())
    {
        if(t==0)
            ans.push_back(temp);

        return;
    }

    //Choosing the element
    if(a[index]<=t)
    {
        temp.push_back(a[index]);
        comSum(a,index,t-a[index],temp,ans);
        temp.pop_back();
    }

    //Not choosing the element
    comSum(a,index+1,t,temp,ans);

return;
}

int main()
{
    boost;
return 0;
}