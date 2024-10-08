z#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_tail(Node* &head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail==NULL)
    {
      head=newNode;
      tail=newNode;
      return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;

    Node *tmp = tail;
}
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL) // head previous null as well
    {
        cout << tmp->val << " ";
        tmp = tmp->prev; // Coming back
    }
    cout << endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    print_normal(head);
    print_reverse(tail);
    
    return 0;
}