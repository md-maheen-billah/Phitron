#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // using loop
    for (int i = 0; i < n; i++) // here complexity O(N)
    {
        for (int j = 1; j < n; j *= 2) // here complexity O(logN) but this loop is nested inside another loop
        {
            cout << "Hello" << endl;
        }
    }
    // here overall complexity O(NlogN)

    return 0;
}
