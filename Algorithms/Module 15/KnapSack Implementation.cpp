#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];

int knapsack(int i, int mx_weight)
{
    if (i < 0 || mx_weight <= 0)
        return 0;
    if (mx_weight >= weight[i])
    {
        // 2 options
        // 1. keep in bag
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i]; // subtructing the weight of items kept from maximum item as it is occupying the space in the bag when kept. Also adding the values of items kept
        // 2. not to keep in bag
        int op2 = knapsack(i - 1, mx_weight); // since we are not keeping in bag, weight does not decrease
        return max(op1, op2);
    }
    else
    {
        int op2 = knapsack(i - 1, mx_weight);
        return op2;
    }
}

int main()
{
    int n, mx_weight;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    cin >> mx_weight;

    cout << knapsack(n - 1, mx_weight);

    return 0;
}