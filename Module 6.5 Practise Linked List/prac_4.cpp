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
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next=newNode;
}

int main()
{
    Node *head = NULL;
    cout << "Option 1 insert at tail" << endl;
    int op;
    cin >> op;
    if (op == 1)

        return 0;
}