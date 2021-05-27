#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

void lpsArray(string pat,int lps[])
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

vector<int> kmp(string txt, string pat)
{
    vector<int> res;
    int m=pat.size(),n=txt.size();
    int lps[m];

    lpsArray(pat,lps);

    int i=0,j=0;

    while(i<n)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;
        }

        if(j==m)
        {
            res.push_back((i-j));
            j=lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i])
        {
            if(j!=0)
                j=lps[j-1];
            else
                i++;       
        }
    }

return res;
}

int main()
{
    boost;
return 0;
}