#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v;
    v2.pop_back();
    v2.insert(v2.begin() + 2, 100); // inserting a specific number in a specific postion
    vector<int> v3 = {10, 20, 30, 40, 50};
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
    v2.insert(v2.begin() + 2, v3.begin(), v3.end()); // inserting a specific indexes of an array in a specific postion

    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
    v2.erase(v2.begin() + 2); // erasing a specific index
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
    v2.erase(v2.begin() + 2, v2.begin() + 7); // erasing a group of index index
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
