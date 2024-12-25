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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void delete_repeat(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *tmp = i;
        for (Node *j = i->next; j != NULL;)
        {
            if (i->val == j->val)
            {
                Node *deleteNode = j;
                tmp->next = j->next; 
                j = j->next;          
                delete deleteNode;    
            }
            else
            {
                tmp = j;   
                j = j->next; 
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_repeat(head);
    print_linked_list(head);
    return 0;
}