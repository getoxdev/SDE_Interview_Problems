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

//Recursion
vector<int> postOrder(Node* root)
{
    vector<int> v;
    if(root==NULL)
        return v;
    
    vector<int> v1=postOrder(root->left);
    for(auto it=v1.begin();it!=v1.end();it++)
        v.push_back(*it);

    vector<int> v2=postOrder(root->right);
    for(auto it=v2.begin();it!=v2.end();it++)
        v.push_back(*it);
        
    v.push_back(root->data);

return v;
}

//Iteration
vector<int> postorder(Node *root)
{
    stack<Node*> s;
    vector<int> v;
    Node *prev=NULL;

    auto curr = root;
    do{
        while(curr!=NULL)
        {
            s.push(curr);
            //Going left
            curr=curr->left;
        }

        while(curr==NULL && !s.empty())
        {
            curr=s.top();
            if(curr->right==NULL || curr->right==prev)
            {
                //Going center only if right is NULL
                v.push_back(curr->data);
                s.pop();
                prev=curr;
                curr=NULL;
            }
            else
                //Going right
                curr=curr->right;
        }
    }while(!s.empty());

return v;
}
int main()
{
    boost;
return 0;
}