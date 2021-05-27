#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Merge two sorted arrays in O(1) space

void naiveMerge(int a[],int b[],int m,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int j,last=a[m-1];
        for(j=m-2;j>=0&&a[j]>b[i];j--)
            a[j+1]=a[j];

        if(j!=m-2||last>b[i])
        {
            a[j+1]=b[i];
            b[i]=last;
        }
    }

return;
}

int nextGap(int gap)
{
    if(gap<=1)
        return 0;

return (gap/2)+(gap%2);
}

void optiMerge(int a[],int b[],int m,int n)
{
    int i,j,gap=m+n;

    for(gap=nextGap(gap);gap>0;gap=nextGap(gap))
    {
        for(i=0;i+gap<m;i++)
        {
            if(a[i]>a[i+gap])
                swap(a[i],a[i+gap]);
        }

        for(j=(gap>m)?gap-m:0;i<m && j<n;i++,j++)
        {
            if(a[i]>b[j])
                swap(a[i],b[j]);
        }

        if(j<n)
        {
            for(j=0;j+gap<n;j++)
            {
                if(b[j]>b[j+gap])
                    swap(b[j],b[j+gap]);
            }
        }
    }

return;
}

int main()
{
    boost;
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
    }

    optiMerge(a,b,m,n);

    for(int i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int j=0;j<n;j++)
    {
        cout<<b[j]<<" ";
    }
return 0;
}