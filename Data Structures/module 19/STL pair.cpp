#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p;
    p = {2, 3};
    cout << p.first << " " << p.second << endl;

    int n;
    cin >> n;
    vector<pair<int, int>> v(5); // a vector of pair type
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second<< endl;
    }
    return 0;
}