#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node( int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void linked_list_one(Node*& head1,Node*& tail1,int val1)
{
    Node* newNode = new Node(val1);
    if (head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return ;
    }
    tail1->next = newNode;
    tail1 = newNode;
}

void linked_list_two(Node*& head2,Node*& tail2,int val2)
{
    Node* newNode = new Node(val2);
    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return ;
    }
    tail2->next = newNode;
    tail2 = newNode;
}
// int size_of_ll_one(Node* head1)
// {
//     Node* tmp = head1;
//     int countOne = 0 ;
//     while (tmp != NULL)
//     {
//         countOne++;
//         tmp = tmp->next;
//     }
    
//     return countOne;
// }

// int size_of_ll_two(Node* head2)
// {
//     Node* tmp = head2;
//     int countTwo = 0 ;
//     while (tmp != NULL)
//     {
//         countTwo++;
//         tmp = tmp->next;
//     }
    
//     return countTwo;
// }
// void print_linked_list_one(Node *head1)
// {
   
   
//     while (tmp != NULL)
//     {
        
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
void print_linked_list_two(Node *head1,Node*head2)
{
     Node *temp = head1;
    
     vector<int>v1;
     
    while (temp != NULL)
    {
        v1.push_back(temp->val);
        
        temp = temp->next;
        
    }
    Node *tmp = head2;
    vector<int>v2;
     while (tmp != NULL)
    {
        v2.push_back(tmp->val);
        
        tmp = tmp->next;
        
    }

    if(v1==v2)
        cout<<"YES";
    else
        cout<<"NO";
    cout << endl;
}

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;
    Node* tail1 = NULL;
    Node* tail2 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
       linked_list_one(head1,tail1,val1);

    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        
        linked_list_two(head2,tail2,val2);

    }
  
    print_linked_list_two(head1,head2);
    // int sizeOfllOne= size_of_ll_one(head1);
    // int sizeOfllTwo= size_of_ll_two(head2);
    // if (sizeOfllOne == sizeOfllTwo)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    
    return 0;
}





