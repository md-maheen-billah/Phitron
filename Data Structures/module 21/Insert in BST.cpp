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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. pop the node
        Node *p = q.front();
        q.pop();
        // 2. take the input of the children for the node
        int l, r;
        cin >> l >> r;
        Node *pleft, *pright;
        if (l == -1)
            pleft = NULL;
        else
            pleft = new Node(l);
        if (r == -1)
            pright = NULL;
        else
            pright = new Node(r);

        p->left = pleft;
        p->right = pright;
        // 3. push the children of the node inside the queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
};

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree";
        return;
    }
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

void insert(Node *&root, int val)
{
    if (root == NULL)
        root = new Node(val);
    if (root->val > val)
    {
        if (root->left == NULL)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
}

int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    insert(root, val);
    insert(root, 11);
    level_order(root);

    return 0;
}