#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//kth largest element in an unsorted array

int findKthLargest(vector<int>& v, int k) 
{
    priority_queue<int,vector<int>,greater<int>> q;
    
    for(auto it=v.begin();it!=v.end();it++)
    {
        q.push(*it);
        if(q.size()>k)
            q.pop();
    }
    
return q.top();  
}

int main()
{
    boost;
return 0;
}