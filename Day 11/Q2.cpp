#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Matrix median

int median(vector<vector<int>> &mat, int r, int c)
{
    int minn = INT_MAX,maxx = INT_MIN;
    
    for(int i=0;i<r;i++)
    {
        minn = min(mat[i][0],minn);
        maxx = max(mat[i][c-1],maxx);
    }
    
    int count = (r*c+1)/2;
    
    while(minn<maxx)
    {
        int mid = minn + (maxx-minn)/2;
        int c = 0;
        
        for(int i=0;i<r;i++)
            c+=upper_bound(mat[i].begin(),mat[i].end(),mid) - mat[i].begin();
            
        if(c<count)
            minn=mid+1;
        else
            maxx=mid;
    }
    
return minn;
}

int main()
{
    boost;
return 0;
}