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
int main()
{
    Node a(10), b(20), c(300);

    a.next = &b;
    b.next = &c;

    cout << a.val << endl;             // printing a
    cout << a.next->val << endl;       // printing b using a
    cout << a.next->next->val << endl; // printing c using a

    return 0;
}
