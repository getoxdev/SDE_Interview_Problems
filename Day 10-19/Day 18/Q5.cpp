#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

bool findPath(Node *root, vector<int> &path, int k)
{
    if(root==NULL)
        return false;
        
    path.push_back(root->data);
    
    if(root->data==k)
        return true;
        
    if((root->left && findPath(root->left,path,k))||(root->right && findPath(root->right,path,k)))
        return true;
        
    path.pop_back();
    
return false;
}

/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL.*/

Node* lca(Node* root ,int n1 ,int n2 )
{
    vector<int> path1,path2;
   
    if(!findPath(root,path1,n1) || !findPath(root,path2,n2))
        return NULL;
        
    int i;
    for(i=0;i<path1.size() && i<path2.size();i++)
    {
        if(path1[i]!=path2[i])
            break;
    }
    
    Node *temp = new Node(path1[i-1]);
    
return temp;
}

int main()
{
    boost;
return 0;
}