#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // here space complixity O(1)
    cin >> n;
    int sum = 0; // here space complixity O(1)
    int a[n];    // however here space complixity is O(N)
    int b[n][n]; // however here space complixity is O(N*N)

    // using loop
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i][i];
    }

    cout << sum << endl;

    return 0;
}

// therefore we can see where space complixity effetcs most
