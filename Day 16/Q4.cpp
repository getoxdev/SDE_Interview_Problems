#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
bool areAnagram(string a,string b)
{
    int cta[256]={0};
    int ctb[256]={0};

    if(a.size()!=b.size())
        return false;

    if(a.empty() || b.empty())
        return false;

    for(int i=0;i<a.size();i++)
    {
        cta[int(a[i])]++;
        ctb[int(b[i])]++;
    }

    for(int i=0;i<256;i++)
    {
        if(cta[i]!=ctb[i])
            return false;
    }

return true;
}

int main()
{
    boost;
return 0;
}