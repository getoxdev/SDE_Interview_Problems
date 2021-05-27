#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Excel column number

int main()
{
    boost;
    string s;
    cin>>s;
    int num=0,n=s.size();
    
    for(int i=0;i<n;i++)
        num+=pow(26,n-1-i)*(int(s[i])-64);
        
    cout<<num;
return 0;
}