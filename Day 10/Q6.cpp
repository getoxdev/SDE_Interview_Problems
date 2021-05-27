#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//kth Permutation Sequence

string getPermutation(int n, int k) 
{
    int fact=1;
    vector<int> nums;
    for(int i=1;i<n;i++)
    {
        nums.push_back(i);
        fact*=i;
    }
    nums.push_back(n);
    
    string ans;
    k--;
    
    while(1)
    {
        ans+=to_string(nums[k/fact]);
        nums.erase(nums.begin()+k/fact);
        if(nums.empty())
            break;
        k=k%fact;
        fact/=nums.size();
    }
    
return ans;
}

int main()
{
    boost;
return 0;
}