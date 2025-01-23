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

Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftroot = convert(a, n, l, mid - 1);
    Node *rightroot = convert(a, n, mid + 1, r);
    root->left = leftroot;
    root->right = rightroot;
    return root;
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node *root = convert(a, n, 0, n - 1);
    level_order(root);

    return 0;
}