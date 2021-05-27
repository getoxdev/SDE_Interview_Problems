#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Flood-Fill Algorithm

void floodFillUtil(vector<vector<int>> &img,int x,int y,int pC,int nC)
{
    int m=img.size();
    int n=img[0].size();
    
    if(x<0 || x>=m || y<0 || y>=n)
        return;
    
    if(img[x][y]!=pC)
        return;
    
    if(img[x][y]==nC)
        return;
    
    img[x][y]=nC;
    
    floodFillUtil(img,x+1,y,pC,nC);
    floodFillUtil(img,x-1,y,pC,nC);
    floodFillUtil(img,x,y+1,pC,nC);
    floodFillUtil(img,x,y-1,pC,nC);
        
return;
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) 
{
    vector<vector<int>> res=image;
    floodFillUtil(res,sr,sc,res[sr][sc],newColor);
    
return res;
}

int main()
{
    boost;
return 0;
}