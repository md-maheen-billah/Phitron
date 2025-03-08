#include <bits/stdc++.h>
using namespace std;
long long dis[1005];
int n, e;
bool cycle;
class Edge
{
public:
    long long int a, b, c;
    Edge(long long int a, long long int b, long long int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edge_list;

void bellman_ford()
{
    for (int i = 1; i < n; i++)
    {
        for (auto ed : edge_list)
        {
            long long int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }
    cycle = false;
    for (auto ed : edge_list) // running once again to check for cycle
    {
        long long int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
        // edge_list.push_back(Edge(b, a, c)); // for indirected
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int s, t;
    cin >> s >> t;
    dis[s] = 0;
    bellman_ford();
    while (t--)
    {
        long long int d;
        cin >> d;
        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else if (dis[d] != LLONG_MAX)
            cout << dis[d] << endl;
        else
            cout << "Not Possible" << endl;
    }

    return 0;
}