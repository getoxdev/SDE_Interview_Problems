#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

string longestCommonPrefix(vector<string>& strs) 
{
    string res;
    int minLen=INT_MAX;
    
    if(strs.empty())
        return res;
    
    for(auto it=strs.begin();it!=strs.end();it++)
        minLen = min(int((*it).size()),minLen);
    
    for(int i=0;i<minLen;i++)
    {
        string temp1 = strs[0];
        char ch=temp1[i];
        for(int j=1;j<strs.size();j++)
        {
            string temp2 = strs[j];
            if(temp2[i]!=ch)
                return res;
        }
        res+=ch;
    }
    
return res;
}

int main()
{
    boost;
return 0;
}