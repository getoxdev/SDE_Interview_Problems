#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Job Sequencing problem

struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

static bool cmp(Job a,Job b)
{
    return a.profit>b.profit;
}

vector<int> JobScheduling(Job a[], int n) 
{ 
    sort(a+0,a+n,cmp);
    
    int sz=0;
    for(int i=0;i<n;i++)
        sz=max(a[i].dead,sz);
    
    int d[sz+1];
    memset(d,-1,sizeof(d));

    int ans=0,ct=0;
    for(int i=0;i<n;i++)
    {
        for(int j=a[i].dead;j>=1;j--)
        {
            if(d[j]==-1)
            {
                d[j]=a[i].id;
                ct++;
                ans+=a[i].profit;
                break;
            }
        }
    }
    
return {ct,ans};
} 

int main()
{
    boost;
    int n;
    cin>>n;
    Job a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].id>>a[i].dead>>a[i].profit;
    
    vector<int> res=JobScheduling(a,n);

return 0;
}