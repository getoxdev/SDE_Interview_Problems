#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Search element in a sorted and rotated array

int binarySearch(int ele, int a[],int l, int r)
{
    int mid;
    while(l<=r)
    {
        mid=l + (r-l)/2; //To avoid overflow

        if(ele==a[mid])
        {
            return mid;
        }
        else if(ele<a[mid])
        {
            r=mid-1;
        }
        else if(ele>a[mid])
        {
            l=mid+1;
        }
    }
return -1;
}

int main()
{
    boost;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ele;
        cin>>ele;

        int l=0,r=n-1,mid,prev,next,index;
        while(l<=r)
        {
            mid = l + (r-l)/2; //To avoid overflow
            prev = (mid+n-1)%n;
            next = (mid+1)%n;
    
            if(a[mid]<a[prev] && a[mid]<a[next])
            {
                index=(mid%n);
                break;
            }
            else
            {
                if(a[mid]>=a[l] && a[mid]<=a[r])
                {
                    index=(l%n);
                    break;
                }
                else if(a[l]<=a[mid])
                    l=mid+1;
                else if(a[mid]<=a[r])
                    r=mid-1;
            }
        }
    
        l=0,r=n-1;
        int val1 = binarySearch(ele,a,l,index-1);
        int val2 = binarySearch(ele,a,index,r);
        if(val1!=-1)
            cout<<val1<<"\n";
        else if(val2!=-1)
            cout<<val2<<"\n";
        else
            cout<<-1<<"\n";
    }
return 0;
}