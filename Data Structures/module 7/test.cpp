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

void print_linked_list_reverse(Node *tmp) // we used recursion to print reverse
{
    // base case
    if(tmp == NULL)
    {
        return;
    }

    print_linked_list_reverse(tmp->next);
    cout << tmp->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true) // complexity O(N)
    {
        cin >> val;
        if(val== -1)
        {
            break;
        }
        insert_at_tail(head,tail,val); // complexity O(1)
    } 

    print_linked_list_reverse(head); // complexity O(N)
    return 0;
}