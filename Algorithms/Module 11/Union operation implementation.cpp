#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

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
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    dsu_union(1, 2);
    dsu_union(2, 0);
    dsu_union(3, 1);

    for (int i = 0; i < 6; i++)
        cout << i << " -> " << par[i] << endl;

    return 0;
}