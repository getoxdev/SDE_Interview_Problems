#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Longest substring without repeat

int main()
{
    boost;
    int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    
	    int n = str.size(); 
        int res = 0;
      
        for (int i = 0; i < n; i++) 
        { 
            vector<bool> visited(256);
      
            for (int j = i; j < n; j++) 
            { 
                if (visited[str[j]] == true) 
                    break; 
                else 
                { 
                    res = max(res, j - i + 1); 
                    visited[str[j]] = true; 
                } 
            } 
        } 
        
        cout<<res<<"\n"; 
	}
    
return 0;
}