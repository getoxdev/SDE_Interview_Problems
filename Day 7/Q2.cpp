#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Find the starting point of a loop

struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* startLoop(Node *head)
{
    Node *slow=head,*fast=head;

    if(head==NULL || head->next==NULL)
        return NULL;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next;

        if(slow==fast)
            break;
    }

    //Loop not found
    if(slow!=fast)
        return NULL;

    //Loop found
    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }

return slow;
}

int main()
{
    boost;
return 0;
}