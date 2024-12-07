#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // using loop
    for (int i = 1; i <= sqrt(n); i++) // here the input is square rooted. Therefore the complexity here is O(sqrt(N))
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }
    cout << endl;

    for (int i = 1; i * i <= n; i++) // it can also be written like this to squareroot n
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }
    cout << endl;

    return 0;
}

// here we tried to obtain the all the divisors of a number