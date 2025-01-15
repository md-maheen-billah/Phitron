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

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
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
int main()
{
    Node *root = input_tree();
    cout << count_nodes(root);
    return 0;
}