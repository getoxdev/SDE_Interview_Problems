#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

void zarray(string pat,int z[])
{
    int m = pat.size(),l,r,k;
    z[0]=0;
    l=r=0;

    for(int i=1;i<m;i++)
    {
        if(i>r)
        {
            l=r=i;

            while(r<m && pat[r-l]==pat[r])
                r++;

            z[i]=r-l;
            r--;
        }
        else
        {
            k=i-l;

            if(z[k]<r-i+1)
                z[i]=z[k];
            else
            {
                r=i;

                while(r<m && pat[r-l]==pat[r])
                    r++;

                z[i]=r-l;
                r--;
            }          
        }
    }

return;
}

void piarray(string pat,int lps[])
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

void check()
{
    string c = "aabcaabxaaaz";
    int z[c.size()];

    zarray(c,z);

    for(int i=0;i<c.size();i++)
        cout<<z[i]<<" ";

return;
}

int main()
{
    boost;
    check();
return 0;
}