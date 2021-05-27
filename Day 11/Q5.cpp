#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//kth element of two sorted arrays

int kth(vector<int> a,vector<int> b,int l1,int l2,int r1,int r2,int k)
{
    int m1=l1+(r1-l1)/2;
    int m2=l2+(r2-l2)/2;
    int kt=(m1-l1+1)+(m2-l2+1);
    
    //a is empty
    if(l1>r1)
        return b[l2+k-1];
        
    //b is empty
    if(l2>r2)
        return a[l1+k-1];
    
    if(kt<=k)
    {
        if(a[m1]<b[m2])
            return kth(a,b,m1+1,l2,r1,r2,k-(m1-l1+1));
        else
            return kth(a,b,l1,m2+1,r1,r2,k-(m2-l2+1));
    }
    else
    {
        if(a[m1]<b[m2])
            return kth(a,b,l1,l2,r1,m2-1,k);
        else
            return kth(a,b,l1,l2,m1-1,r2,k);
    }
}

int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> a(arr1,arr1+n);
    vector<int> b(arr2,arr2+m);
    
return kth(a,b,0,0,a.size()-1,b.size()-1,k);
}

int main()
{
    boost;
return 0;
}