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

void insert_at_tail(Node *&head, int val) // used reference using &, otherwise no changes will take place
{
    Node *newnode = new Node(val);

    if (head == NULL) // incase if we do not have a head or head is null
    {
        head = newnode;
    }

    else // else normal insertion at tail
    {
        Node *tmp = head;

        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        // after iteration at this point tmp is at last node
        tmp->next = newnode;
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 100);
    insert_at_tail(head, 200);
    print_linked_list(head);
    // output
    // 10
    // 20
    // 30
    // 100
    // 200

    return 0;
}