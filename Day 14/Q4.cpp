#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Sliding window maximum

vector<int> maxSlidingWindow(vector<int>& a, int k) 
{
    if(a.size()==1)
        return a;
    
    int i=0,j=0,n=a.size();
    list<int> l;
    vector<int> res;

    while(j<n)
    {
        while(l.back()<a[j] && !l.empty())
            l.pop_back();

        l.push_back(a[j]);

        if(j-i+1<k)
            j++;
        else if(j-i+1==k)
        {
            res.push_back(l.front());   
            if(a[i]==l.front())
                l.pop_front();

            i++;
            j++;
        }
    }

return res;
}

int main()
{
    boost;
return 0;
}