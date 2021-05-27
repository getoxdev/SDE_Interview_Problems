#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Median in a stream of running integers

priority_queue<int> q1;
priority_queue<int,vector<int>,greater<int>> q2;

void insertHeap(int num)
{
    if(q1.empty()||q1.top()>num)
        q1.push(num);
    else
        q2.push(num);
        
    if(q1.size()>q2.size()+1)
    {
        q2.push(q1.top());
        q1.pop();
    }
    else if(q2.size()>q1.size()+1)
    {
        q1.push(q2.top());
        q2.pop();
    }
    
return;
}

// Function to return getMedian
double getMedian()
{
    if(q1.size()>q2.size())
        return double(q1.top());
    else if(q2.size()>q1.size())
        return double(q2.top());
    else
        return double((double(q1.top())+double(q2.top()))/2);
}

int main()
{
    boost;
return 0;
}