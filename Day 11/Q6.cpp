#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Median of two sorted arrays

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    if(nums1.size()>nums2.size())
        return findMedianSortedArrays(nums2,nums1);
    
    int x=nums1.size(),y=nums2.size();
    int l=0,h=x;
    
    while(l<=h)
    {
        int px=l+(h-l)/2;
        int py=((x+y+1)/2)-px;
        
        int rx,ry,lx,ly;
        
        lx = (px==0)?INT_MIN:nums1[px-1];
        ly = (py==0)?INT_MIN:nums2[py-1];
        
        rx = (px==x)?INT_MAX:nums1[px];
        ry = (py==y)?INT_MAX:nums2[py];
        
        if(lx<=ry && ly<=rx)
        {
            if((x+y)%2==0)
                return double((double(max(lx,ly))+double(min(rx,ry)))/2);
            else
                return double(max(lx,ly));
        }
        else if(lx>ry)
            h=px-1;
        else
            l=px+1;
    }
    
return double(0);
}

int main()
{
    boost;
return 0;
}