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

void insert_at_tail(Node *&head, Node *&tail, int val) // optimized to complexity O(1)
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

void linked_list_reverse(Node *&head, Node *tmp, Node *&tail) // we used recursion to print reverse
{
    // base case
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }

    linked_list_reverse(head, tmp->next, tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true) // complexity O(N)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val); // complexity O(1)
    }

    linked_list_reverse(head, head, tail);
    print_linked_list(head);
    return 0;
}