#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

void piarray(string pat,vector<int> &lps)
{
    int index=0,i=1;
    lps[0]=0;

    while(i<pat.size())
    {
        if(pat[i]==pat[index])
        {
            index++;
            lps[i]=index;
            i++;
        }
        else
        {
            if(index!=0)
                index=lps[index-1];
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }

return;
}

int minChar(string s)
{
    int n=s.size();
    vector<int> lps;
    string str=s+"$";
    reverse(s.begin(),s.end());
    str+=s;

    piarray(str,lps);

return (s.size()-lps.back());
}

int main()
{
    boost;
return 0;
}