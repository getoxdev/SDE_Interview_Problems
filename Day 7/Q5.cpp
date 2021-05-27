#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Remove duplicates from a sorted array

int removeDuplicates(int a[],int n) 
{
    if(n==0 || n==1)
        return n;
    
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j]=a[i];
            j++;
        }
    }
    a[j]=a[n-1];
    j++;
    
return j;
}
int main()
{
    boost;
return 0;
}