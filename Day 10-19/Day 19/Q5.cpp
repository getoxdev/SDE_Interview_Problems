#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Flatten Binary Tree to LinkedList

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void flatten(Node *root)
{
    if(!root)
        return;

    stack<Node*> st;
    st.push(root);

    while(!st.empty())
    {
        Node *temp=st.top();
        st.pop();

        if(temp->right)
            st.push(temp->right);

        if(temp->left)
            st.push(temp->left);

        if(!st.empty())
            temp->right=st.top();
            
        temp->left=NULL;
    }

return;
}

int main()
{
    boost;
return 0;
}