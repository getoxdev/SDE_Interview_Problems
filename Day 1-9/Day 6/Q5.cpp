#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Flattening of a LinkedList

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

Node* merge(Node *a, Node *b)
{
    Node *result=NULL;
    
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
        
    if(a->data<=b->data)
    {
        result=a;
        result->bottom=merge(a->bottom,b);
    }
    else
    {
        result=b;
        result->bottom=merge(a,b->bottom);
    }
    
    result->next=NULL;
    
return result;
}

Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL)
        return root;
        
    return merge(root,flatten(root->next));
}

int main()
{
    boost;
return 0;
}