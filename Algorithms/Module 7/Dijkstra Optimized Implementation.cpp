#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105]; // in each index of an array there is a vector
int dis[105];

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        // ber kore ana
        pair<int, int> par = pq.top();
        pq.pop();
        int par_node = par.second;
        int par_distance = par.first; // we can keep the values of the pair separately for better understanding

        // children gulo push kora
        for (auto child : adj_list[par_node])
        {
            int child_node = child.first; // we can keep the values of the pair separately for better understanding
            int child_distance = child.second;
            if (par_distance + child_distance < dis[child_node])
            {
                dis[child_node] = par_distance + child_distance;
                pq.push({dis[child_node],child_node});
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