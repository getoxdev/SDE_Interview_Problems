#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Inversion of array using Merge Sort

long long int merge(long long a[],int l,int m,int r)
{
    int i=l,j=m,k=l;
    long long int ct=0;
    long long temp[r+1];
    
    while(i<=m-1 && j<=r)
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
        {
            temp[k++]=a[j++];
            ct+=m-i; //Most important step
        }
    }
    
    while(i<=m-1)
        temp[k++]=a[i++];
        
    while(j<=r)
        temp[k++]=a[j++];
    
    for(i=l;i<=r;i++)
        a[i]=temp[i];
        
return ct;
}

long long int mergeSort(long long a[],int l,int r)
{
    long long int ct=0;
    
    if(l<r)
    {
        int m=l+((r-l)/2);
        
        ct+=mergeSort(a,l,m);
        ct+=mergeSort(a,m+1,r);
        
        ct+=merge(a,l,m+1,r);
    }
    
return ct;
}

long long int inversionCount(long long a[], long long n)
{
    return mergeSort(a,0,n-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        long long int ct = inversionCount(a,n);
        cout<<ct<<"\n";
    }
return 0;
}