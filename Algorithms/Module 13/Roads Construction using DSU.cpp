#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];
int cmp, mx; // used to find number of components in a set and maximum set

int find(int node) // to find leader or parent
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader; // setting the parent to the root parent for optimization // 4->5->3->1 parent of 4 is 5, 5 is 3 and 3 is 1. Therefore root parent is 1. we therefore set the parent as 1 for 4,5,3 to 1.
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (leader1 == leader2) // used to detect cycle
        return;
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        mx = max(mx, group_size[leader1]);
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        mx = max(mx, group_size[leader2]);
    }
    cmp--;
}

int main()
{
    int n, e;
    cin >> n >> e;
    cmp = n;
    mx = 1;
    memset(par, -1, sizeof(par));
    for (int i = 1; i <= n; i++)
    {
        group_size[i] = 1;
    }
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
        cout << cmp << " " << mx << endl;
    }
    return 0;
}