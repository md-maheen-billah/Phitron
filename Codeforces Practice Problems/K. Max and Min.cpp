#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
        if (a[i] < mn)
        {
            mn = a[i];
        }
    }

    cout << mn << " " << mx;

    return 0;
}