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

void insert_at_any_position(Node *head, int idx, int val) // reference using & is not required as we will not be changing head
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    // now tmp is at idx-1, which is node a
    newnode->next = tmp->next; // here we are first connecting node b after the newnode, here tmp has iterated to a, and a->next is b
    tmp->next = newnode;       // now we are connecting newnode after node a which is in tmp
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

    insert_at_any_position(head, 2, 100); // here we are trying to insert in idx 2 which is currently occupied by node b
    print_linked_list(head);
    // output
    // 10
    // 20
    // 100
    // 30

    return 0;
}