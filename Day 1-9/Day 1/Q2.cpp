#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Sort an array of 0,1,2 in O(1) time & space

void sort012Naive(int a[],int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        c0++;
        else if(a[i]==1)
        c1++;
        else if(a[i]==2)
        c2++;
    }

    int i=0;

    while(c0--)
    a[i++]=0;

    while(c1--)
    a[i++]=1;

    while(c2--)
    a[i++]=2;

return;
}

void sort012Opti(int a[],int n)
{
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(a[mid]==0)
            swap(a[low++],a[mid++]);
        else if(a[mid]==1)
            mid++;
        else if(a[mid]==2)
            swap(a[mid],a[high--]);
    }

return;
}

int main()
{
    boost;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort012Opti(a,n);
return 0;
}