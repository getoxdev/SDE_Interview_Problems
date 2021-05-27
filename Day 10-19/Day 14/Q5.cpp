#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Implement Min Stack

stack<int> s;
int minEle;

void push(int a)
{
    if(s.empty())
    {
        s.push(a);
        minEle=a;
    }
    else
    {
        if(a>=minEle)
            s.push(a);
        else
        {
            s.push(2*a -minEle);
            minEle=a;
        }
    }

return;
}

bool isFull(int n)
{
    if(s.size()==n)
        return true;
        
return false;
}

bool isEmpty()
{
    if(s.empty())
        return true;
        
return false;
}

int pop()
{
    int ans;

    if(s.top()>=minEle)
        ans = s.top();
    else
    {
        minEle = 2*minEle - s.top();
        ans = minEle;
    }
    
    s.pop();

return ans;
}

int getMin()
{
return minEle;
}

int main()
{
    boost;
return 0;
}