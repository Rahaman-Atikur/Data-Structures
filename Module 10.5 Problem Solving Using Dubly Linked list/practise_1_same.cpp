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
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail1(Node *&head1, Node *&tail1, int val1)
{
    Node *newNode1 = new Node(val1);
    if (head1 == NULL)
    {
        head1 = newNode1;
        tail1 = newNode1;
        return;
    }

    tail1->next = newNode1;

    newNode1->prev = tail1;
    tail1 = newNode1;
}
void insert_tail2(Node *&head2, Node *&tail2, int val2)
{
    Node *newNode2 = new Node(val2);
    if (head2 == NULL)
    {
        head2 = newNode2;
        tail2 = newNode2;
        return;
    }

    tail2->next = newNode2;

    newNode2->prev = tail2;
    tail2 = newNode2;
}
void print(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    int count1 = 0;
    while (tmp1 != NULL)
    {
        count1++;
        tmp1 = tmp1->next;
    }
    cout << endl;
    Node *tmp2 = head2;
    int count2 = 0;
    while (tmp2 != NULL)
    {
        count2++;
        tmp2 = tmp2->next;
    }
         int flag = 0;  
         if(count1!=count2)
         {
            cout<<"NO";
         }
        if (count1 == count2)
        {
            tmp1=head1;
            tmp2=head2;
             while(tmp1!=NULL)
        {
            
            if (tmp1->val == tmp2->val)
            {

                tmp1=tmp1->next;
                 tmp2=tmp2->next;
                  
               
            }
            else 
            {
                flag=1;
                break;
            }
        }
        if (flag == 1)
        cout << "NO";
    else
        cout << "YES";
    
        }
       

    
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int val1;
    while (1)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail1(head1, tail1, val1);
    }
    int val2;
    while (1)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail2(head2, tail2, val2);
    }
    print(head1, head2);

    return 0;
}