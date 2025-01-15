#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. pop the node
        Node *temp = q.front();
        q.pop();
        // 2. print the node value kept inside temp
        cout << temp->val << " ";
        // 3. push the children of the node inside the queue
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
};
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    level_order(root);

    return 0;
}