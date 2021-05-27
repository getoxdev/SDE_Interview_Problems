#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Delete the Node when it is given

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// The function may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{
  Node *temp=node;
  temp=temp->next;

  node->data=temp->data;
  node->next=temp->next;

return;
}

int main()
{
    boost;
return 0;
}