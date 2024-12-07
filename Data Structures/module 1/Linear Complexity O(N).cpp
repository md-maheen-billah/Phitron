#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // here complexity O(1)
    cin >> n; // here complexity O(1)
    // using loop
    for (int i = 0; i <= n; i++) // here complexity O(n)
    {
        cout << i << " ";
    }
    cout << endl;                   // here complexity O(1)
    for (int i = 0; i <= n; i += 2) // here complexity O(n)
    {
        cout << i << " ";
    }

    return 0; // here complexity O(1)
}

// therefore we can say O(n+n+1+1+1+1) but instead we take the highest and choose O(n) as the linear complexity