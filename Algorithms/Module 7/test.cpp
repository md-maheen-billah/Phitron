#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105]; // in each index of an array there is a vector
int dis[105];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        // ber kore ana
        pair<int, int> par = q.front();
        q.pop();
        int par_node = par.first; // we can keep the values of the pair separately for better understanding
        int par_distance = par.second;

        // children gulo push kora
        for (auto child : adj_list[par_node])
        {
            int child_node = child.first; // we can keep the values of the pair separately for better understanding
            int child_distance = child.second;
            if (par_distance + child_distance < dis[child_node])
            {
                dis[child_node] = par_distance + child_distance;
                q.push({child_node, dis[child_node]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c}); // pushing the path connected to and weight
        adj_list[b].push_back({a,c}); // pushing the path connected to and weight
    }
    for (int i = 0; i < n; i++) // we are using loop since memset is unable to set the values to INT_MAX
    {
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}