#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val); //logN as it maintains a balanced BST
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    if (s.count(4)) //logN
        cout << "Is Present";
    else
        cout << "Is Not Present";
    return 0;
}