#include <bits/stdc++.h>
using namespace std;

void recur(int n, int mx)
{
    if (n <= 0)
    {
        cout << mx;
        return;
    }
    int x;
    cin >> x;
    if (x > mx)
    {
        mx = x;
    }
    recur(n - 1, mx);
}

int main()
{
    int N;
    cin >> N;
    int mx = INT_MIN;
    recur(N, mx);
    return 0;
}