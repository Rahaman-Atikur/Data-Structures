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
void insert_tail(Node *&head,  int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void insert_head(Node*&head,int v)
{
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
     cout << endl;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        while(true)
        {
   
    Node *head = NULL;
    Node *tail = NULL;
    int x,v;
    cin>>x;
    if(x==1)
    {
        cin>>v;
        insert_tail(head,v);
        print_linked_list(head);
        break;
        
       
    }
   else if(x==0)
    {
        cin>>v;
        insert_head(head,v);
        print_linked_list(head);
        break;
        
       
    }
    
        }

    
    }
    
    
    
    return 0;
}