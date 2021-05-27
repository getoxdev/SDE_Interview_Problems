#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

int compareVersion(string v1, string v2) 
{
    vector<int> s1,s2;
    int temp=0;
    
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        if((*it)=='.')
        {
            s1.push_back(temp);
            temp=0;
        }
        else
            temp=temp*10+((*it)-'0');
    }
    
    s1.push_back(temp);
    
    temp=0;
    for(auto it=v2.begin();it!=v2.end();it++)
    {
        if((*it)=='.')
        {
            s2.push_back(temp);
            temp=0;
        }
        else
            temp=temp*10+((*it)-'0');
    }
    
    s2.push_back(temp);
    
    if(s1.size()>s2.size())
    {
        int siz=s1.size()-s2.size();
        for(int i=0;i<siz;i++)
            s2.push_back(0);
    }
    if(s1.size()<s2.size())
    {
        int siz=s2.size()-s1.size();
        for(int i=0;i<siz;i++)
            s1.push_back(0);
    }
    
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>s2[i])
            return 1;
        else if(s1[i]<s2[i])
            return -1;
    }
        
return 0;
}

int main()
{
    boost;
return 0;
}