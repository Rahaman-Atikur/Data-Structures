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
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    // 100 next connect with 20 previous
    // How to get 20 so we need loop and pos-1
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
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
void insert_head(Node*&tail,Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}
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
    int pos, val;
    cin >> pos >> val;
    if(pos>size_of_linked_list(head))
    {
        cout<<"Invalid index";
    }
    if (pos == 0)
    {
        insert_head(head,tail, val);
    }
    else if(pos== size_of_linked_list(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert_at_any_position(head, pos, val);
    }

    insert_at_any_position(head, pos, val);
    print_normal(head);
    print_reverse(tail);
    size_of_linked_list(head);

    return 0;
}