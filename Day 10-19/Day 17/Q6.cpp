#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
struct Node{

    int data;
    Node *left,*right;

    Node(int key)
    {
        data=key;
        left=right=NULL;
    }
};

void topView(Node *root, int clvl, int hd, map<int,pair<int,int>> &mt)
{
    if(root==NULL)
        return;

    if(mt.find(hd)==mt.end())
        mt[hd]={root->data,clvl};
    else
    {
        pair<int,int> p = mt[hd];

        if(clvl<p.second)
            mt[hd]={root->data,clvl};
    }

    topView(root->left,clvl+1,hd-1,mt);
    topView(root->right,clvl+1,hd+1,mt);

return;
}

int main()
{
    boost;
return 0;
}