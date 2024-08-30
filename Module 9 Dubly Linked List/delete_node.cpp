#include <bits/stdc++.h>
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
int size_of_linked_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_at_position(Node *head, int pos)
{
   
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void delete_tail(Node*&tail)
{
    Node * deleteNode = tail;
    tail=tail->prev;
    delete deleteNode;
    tail->next=NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b; // Declaring tail node or tracking
    head->next = a; // One Node Forward & Backward Connection
    a->prev = head;
    a->next = b; // 2nd and 3rd Node Connection
    b->prev = a;
    // int pos;
    // cin>>pos;
    // delete_at_position(head,pos);
    delete_tail(tail);
    print_normal(head);
    print_reverse(tail);
    size_of_linked_list(head);

    return 0;
}