#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Minimum number of platforms required for a railway

int main()
{
    boost;
    int n;
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>dep[i];
    }

    sort(arr, arr + n); 
    sort(dep, dep + n); 
  
    int plat= 1, res= 0; 
    int i = 1, j = 0; 
  
    while (i < n && j < n) {  
        if (arr[i] <= dep[j]) { 
            plat++; 
            i++; 
        } 
  
        else if (arr[i] > dep[j]) { 
            plat--; 
            j++; 
        } 
  
        if (plat > res) 
            res = plat; 
    }

    cout<<res<<" ";
return 0;
}