#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n); // if size is declared using n follow this method
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> v; // if size is not declared follow push_back method
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
