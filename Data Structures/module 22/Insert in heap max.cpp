#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> val;
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[cur_idx] > v[par_idx])
            swap(v[par_idx], v[cur_idx]);
        else
            break;
        cur_idx = par_idx;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}