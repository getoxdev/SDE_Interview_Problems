#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Implement Queue using Stack

stack<int> s1,s2;
void push(int x)
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    s1.push(x);

    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }

return;
}

int pop()
{
    int x=s1.top();
    s1.pop();

return x;
}

int front()
{
    return s1.top();
}

int rear()
{
    stack<int> temp=s1;
    int x;

    while(!s1.empty())
    {
        x=s1.top();
        s1.pop();
    }

return x;
}

int main()
{
    boost;
return 0;
}