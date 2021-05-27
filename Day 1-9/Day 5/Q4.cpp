#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Remove nth node from back of LinkedList

struct Node
{
    int data;
    Node* next;
};

Node* deleteBack(Node* head,int k)
{
    Node *first = head,*second = head; 
    for (int i = 0; i < k; i++) 
    { 
        if (second->next == NULL)  
        { 
            if (i == k - 1) 
                head = head->next; 
            return head; 
        } 
        second = second->next; 
    } 

    while (second->next != NULL) 
    { 
        first = first->next; 
        second = second->next; 
    } 

    first->next = first->next->next; 
return head;
}

int main()
{
    boost;
return 0;
}