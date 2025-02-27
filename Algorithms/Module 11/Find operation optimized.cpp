#include <bits/stdc++.h>
using namespace std;
int par[1005];

int find(int node) // to find leader or parent
{
    if(par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader; // setting the parent to the root parent for optimization // 4->5->3->1 parent of 4 is 5, 5 is 3 and 3 is 1. Therefore root parent is 1. we therefore set the parent as 1 for 4,5,3 to 1.
    return leader;
}

int main()
{
    memset(par, -1, sizeof(par));
    par[0] = 1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    cout << find(4) << endl;

    return 0;
}