#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

//Function call should have level=1 and maxLevel=0
void leftView(Node* root, int level, int &maxLevel)
{
    if (root == NULL) 
        return; 
  
    //First node of its level 
    if(maxLevel < level) { 
        cout << root->data << " "; 
        maxLevel = level; 
    } 
  
    leftView(root->left, level + 1, maxLevel); 
    leftView(root->right, level + 1, maxLevel); 
}

int main()
{
    boost;
return 0;
}