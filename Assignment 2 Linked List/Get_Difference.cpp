#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    int mn = INT_MAX;
    int mx = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val < mn)
        {
            mn = tmp->val;
        }
        if (tmp->val > mx)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    int difference = mx-mn;
    cout<<difference;
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL; // Tracking tail
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_linked_list(head);
    return 0;
}