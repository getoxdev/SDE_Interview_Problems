#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
    	vector<string> v;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                v.push_back(temp);
                temp="";
            }
            else
                temp.push_back(s[i]);
        }
        if(temp!="")
        {
            v.push_back(temp);
            temp="";
        }
        
        string res="";
        reverse(v.begin(),v.end());
        for(auto it=v.begin();it!=v.end();it++)
        {
            res+=*it;
            res.push_back('.');
        }
        
        res.pop_back();
        
        cout<<res<<"\n";
    }
return 0;
}