#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {3, 20, 1, 6, 20, 4, 7, 20, 9, 1, 7};
    l.remove(20); // remove a specific value from the entire list
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.sort(); // sorting in ascending order
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.sort(greater<int>()); // sorting in descending order
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.unique(); // only use this after a list is sorted, otherwise it wont work
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.reverse(); // reverses a list
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}