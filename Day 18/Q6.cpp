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

/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2)
{
    if(r1==NULL && r2==NULL)
        return true;
        
    if(r1!=NULL && r2!=NULL)
    {
        if(r1->data==r2->data && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right))
            return true;
    }
    
return false;
}
int main()
{
    boost;
return 0;
}