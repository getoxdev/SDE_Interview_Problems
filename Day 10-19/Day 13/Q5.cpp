#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Check for balanced parentheses

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    stack<int> p;
	    for(int i=0;i<s.size();i++)
	    {
	        if(p.empty())
	            p.push(s[i]);
	        else
	        {
	            if(s[i]==')')
	            {
	                if(p.top()=='(')
	                    p.pop();
	                else
	                    p.push(s[i]);
	            }
	            else if(s[i]=='}')
	            {
	                if(p.top()=='{')
	                    p.pop();
	                else
	                    p.push(s[i]);
	            }
	            else if(s[i]==']')
	            {
	                if(p.top()=='[')
	                    p.pop();
	                else
	                    p.push(s[i]);
	            }
	            else
	                p.push(s[i]);
	        }
	    }
	    
	    if(p.empty())
	        cout<<"balanced\n";
	    else
	        cout<<"not balanced\n";
	}
return 0;
}