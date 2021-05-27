#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Serialize and Deserialize a Binary Tree

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Encodes a binary tree to a string
string serialize(TreeNode* root) 
{
    if(root==NULL)
        return "NULL";
    
    string lefts=serialize(root->left);
    string rights=serialize(root->right);
    
return to_string(root->val)+"-"+lefts+"-"+rights;
}

TreeNode* deserializeHelper(queue<string> &q)
{
    if(q.empty())
        return NULL;
    
    string num=q.front();
    q.pop();
    
    if(num=="NULL")
        return NULL;
    
    TreeNode* node=new TreeNode(stoi(num));
    node->left=deserializeHelper(q);
    node->right=deserializeHelper(q);
    
return node;
}
// Decodes the encoded string to a binary tree
TreeNode* deserialize(string data) 
{
    queue<string> q;
    string temp="";
    for(int i=0;i<data.size();i++)
    {
        if(data[i]=='-')
        {
            q.push(temp);
            temp="";
        }
        else
            temp.push_back(data[i]);
    }
    if(!temp.empty())
        q.push(temp);
    
return deserializeHelper(q);
}

int main()
{
    boost;
return 0;
}