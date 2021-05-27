#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find the element that appears once in a sorted array and the rest elements appears twice

int findOnce(int a[], int n)
{
    int low=0,high=n-1;
    
    while(high>=low)
    {
        int mid = (low+high)/2;
        
        if(low==high)
            return a[low];
        
        if(mid%2==0)
        {
            if(a[mid]==a[mid+1])
                low=mid+2;
            else
                high=mid;
        }
        else
        {
            if(a[mid]==a[mid-1])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    
return -1;
}

int main()
{
    boost;
return 0;
}