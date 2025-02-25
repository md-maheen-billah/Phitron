#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj_list[n]; // in each index of an array there is a vector
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c}); // pushing the path connected to and weight
        adj_list[b].push_back({a, c}); // pushing the path connected to and weight
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (auto p : adj_list[i])
            cout << p.first << " " << p.second << ", ";
        cout << endl;
    }
    return 0;
}