#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    //using loop
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    //using formula
    int sum2 = (n*(n+1))/2;
    cout << sum2 << endl;
    return 0;
}