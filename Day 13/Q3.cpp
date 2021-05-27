#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Implement Stack using Queue

queue<int> q1,q2;
void push(int x)
{
    q2.push(x);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    queue<int> temp=q1;
    q1=q2;
    q2=temp;
    
return;
}

int pop()
{
    int x=q1.front();
    q1.pop();

return x;
}

int top()
{
    return q1.front();
}

int main()
{
    boost;
return 0;
}