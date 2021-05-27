#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//kth largest element in a stream

vector<int> kthLargest(int k, int arr[], int n) 
{
    priority_queue<int,vector<int>,greater<int>> q;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        q.push(arr[i]);
        if(q.size()>k)
            q.pop();
            
        if(q.size()<k)
            res.push_back(-1);
        else
            res.push_back(q.top());
    }

return res;
}

int main()
{
    boost;
return 0;
}