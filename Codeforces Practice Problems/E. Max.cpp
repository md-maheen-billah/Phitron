#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }

    cout << mx;

    return 0;
}