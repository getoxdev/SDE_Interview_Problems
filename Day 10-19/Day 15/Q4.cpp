#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

int atoi(char* s)
{
    if(*s=='\0')
        return -1;

    int sign=1,i=0;
    if(s[0]=='-')
    {
        sign=-1;
        i++;
    }

    int res=0;
    while(s[i]!='\0')
    {
        if(s[i]>='0' && s[i]<='9')
            res = (res*10) + (s[i]-'0'); 
        else
            return -1;

        i++;
    }

return sign*res;
}

int strstr(string s, string x)
{
    int m=s.size(),n=x.size();
        
    if(x.size()==0)
        return 0;
    
    for(int i=0;i<m;i++)
    {
        if(s.substr(i,n)==x)
            return i;
    }
            
return -1;
}

int main()
{
    boost;
return 0;
}