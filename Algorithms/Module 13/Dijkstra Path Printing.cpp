#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll, ll>> adj_list[100005]; // in each index of an array there is a vector
ll dis[100005];
ll parent[100005]; // an array to store information of the parent of a child

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        // ber kore ana
        pair<ll, ll> par = pq.top();
        pq.pop();
        ll par_node = par.second;
        ll par_distance = par.first; // we can keep the values of the pair separately for better understanding

        // children gulo push kora
        for (auto child : adj_list[par_node])
        {
            ll child_node = child.first; // we can keep the values of the pair separately for better understanding
            ll child_distance = child.second;
            if (par_distance + child_distance < dis[child_node])
            {
                dis[child_node] = par_distance + child_distance;
                pq.push({dis[child_node], child_node});
                parent[child_node] = par_node; // to find the exact path we are keeping information of the parent of child node
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
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c}); // pushing the path connected to and weight
        adj_list[b].push_back({a, c}); // pushing the path connected to and weight
    }
    for (int i = 1; i <= n; i++) // we are using loop since memset is unable to set the values to LLONG_MAX
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }
    dijkstra(1);
    if (dis[n] == LLONG_MAX) // checking whether there is a path connected with source
        cout << -1 << endl;
    else // we print the path taken
    {
        ll node = n; // taking a node from destination
        vector<ll> path;
        while (node != -1)
        {
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(), path.end());
        for (auto p : path)
        {
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}