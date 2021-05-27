#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find middle of the LinkedList

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int getMiddle(Node *head)
{
    if(head==NULL)
        return -1;

    Node *slowPtr = head;
    Node *fastPtr = head;
    
    while(fastPtr!=NULL && fastPtr->next!=NULL)
    {
        fastPtr=fastPtr->next->next;
        slowPtr=slowPtr->next;
    }
    
return slowPtr->data;
}

int main()
{
    boost;
return 0;
}