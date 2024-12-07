#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    // using loop
    for (int i = 0; i < n; i++) // here complexity O(N)
    {
        for (int j = 0; j < n; j++) // here complexity O(N) but this loop is nested inside another loop
        {
            cout << "Hello" << endl;
        }
    }
    // here overall complexity O(N*N)
    cout << endl;

    for (int i = 0; i < n; i++) // here complexity O(N)
    {
        for (int j = 0; j < m; j++) // here complexity O(M) but this loop is nested inside another loop
        {
            cout << "Hello" << endl;
        }
    }
    // here overall complexity O(N*M)

    return 0;
}
