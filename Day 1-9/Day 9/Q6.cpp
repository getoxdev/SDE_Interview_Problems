#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Word Break (Print all ways)

void solveWord(string s,string t,set<string> d,vector<string> &res)
{
    if(s.empty())
    {
        t.pop_back();
        res.push_back(t);
        return;
    }
    
    for(int i=0;i<s.size();i++)
    {
        string l=s.substr(0,i+1);
        if(d.find(l)!=d.end())
        {
            string r=s.substr(i+1);
            solveWord(r,t+l+" ",d,res);
        }
    }
    
return;
}

vector<string> wordBreak(string s, vector<string>& dict) 
{
    set<string> d;
    for(int i=0;i<dict.size();i++)
        d.insert(dict[i]);
    
    vector<string> res;
    solveWord(s,"",d,res);
    
return res;
}

int main()
{
    boost;
return 0;
}