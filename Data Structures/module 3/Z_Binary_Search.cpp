#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
            cout << "not found" << endl;
    }
    return 0;
}