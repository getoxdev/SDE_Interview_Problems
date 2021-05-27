#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;
//Implement Stack and Queue

struct Node
{
    int data;
    Node* nxt;
};

Node *top=NULL,*front=NULL,*rear=NULL;

void pushStack(int x)
{
    Node *temp=new Node();
    temp->data=x;
    temp->nxt=NULL;

    if(top==NULL)
        top=temp;
    else
    {
        temp->nxt=top;
        top=temp;
    }

return;
}

int popStack()
{
    if(top==NULL)
        return -1;

    int temp=top->data;

    top=top->nxt;

return temp;
}

int topStack()
{
    if(top==NULL)
        return -1;

return top->data;
}

void pushQueue(int x)
{
    Node *temp=new Node();
    temp->data=x;
    temp->nxt=NULL;

    if(front==NULL || rear==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->nxt=temp;
        rear=temp;
    }

return;
}

int popQueue()
{
    if(front==NULL || rear==NULL)
        return -1;

    int temp=front->data;

    front=front->nxt;

    if(front==NULL)
        rear=front;

return temp;
}

int frontQueue()
{
    if(front==NULL)
        return -1;

return front->data;
}

int rearQueue()
{
    if(rear==NULL)
        return -1;

return rear->data;
}

int main()
{
    boost;
return 0;
}