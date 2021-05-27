#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//BST Iterator

struct Node 
{
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
stack<Node*> s;
    
void pushLeft(Node *node)
{
    while(node!=NULL)
    {
        s.push(node);
        node = node->left;
    }

return;
}

void initialize(Node* root) 
{
    pushLeft(root);
}

int next() 
{
    int x = s.top()->data;
    Node *curr = (s.top())->right; 
    s.pop(); 
    pushLeft(curr);

return x;
}

bool hasNext() 
{
    if(s.empty())
        return false;

return true;
}

int main()
{
    boost;
return 0;
}