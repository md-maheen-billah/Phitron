#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105]; // in each index of an array there is a vector
int dis[105];

void dijkstra(int src)
{
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c}); // pushing the path connected to and weight
        adj_list[b].push_back({a, c}); // pushing the path connected to and weight
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << endl;
    }
    dijkstra(0);

    return 0;
}