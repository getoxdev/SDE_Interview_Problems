#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Palindrome Partioning

bool isPalin(string a,int i,int j)
{
    while(i<j)
    {
        if(a[i++]!=a[j--])
            return false;
    }

return true;
}

void palin(string s,int ind,vector<string> &temp,vector<vector<string>> &res)
{
    if(ind==s.size())
    {
        res.push_back(temp);
    return;
    }
        
    for(int i=ind;i<s.size();i++)
    {
        if(isPalin(s,ind,i))
        {
            temp.push_back(s.substr(ind,i-ind+1));
            palin(s,i+1,temp,res);
            temp.pop_back();
        }
    }
    
return;
}

int main()
{
    boost;
return 0;
}