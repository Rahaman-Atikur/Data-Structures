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
// void print_linked_list(Node *head,int x)
// {
//     Node *tmp = head;
//     int count =0;
//     int flag =0;
//     while (tmp != NULL)
//     {
//         if(tmp->val==x)
//         {
//            flag=1;
//         }
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
void count_recursion(Node*head,Node*n,int x)
{
    Node*tmp=head;
    if(tmp->val==x) return;
    int count=0;
    count++;
    cout<<count<<endl;
    count_recursion(head,n->next,x);
}

int main()
{
    Node *head = NULL;
    Node * n;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int x;
    cin>>x;
    count_recursion(head,n,x);
    // print_linked_list(head,x);
    return 0;
}