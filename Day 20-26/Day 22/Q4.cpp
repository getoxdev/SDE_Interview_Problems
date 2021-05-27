#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Distinct numbers in a window

vector <int> countDistinct (int a[], int n, int k)
{
    vector<int> res;
    int i=0,j=0;
    map<int,int> mp;
    while(j<n)
    {
        mp[a[j]]++;
        if(j-i+1<k)
            j++;
        else if(j-i+1==k)
        {
            res.push_back(mp.size());
            if(mp[a[i]]==1)
                mp.erase(a[i]);
            else
                mp[a[i]]--;
                
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