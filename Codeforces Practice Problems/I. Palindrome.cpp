#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int checker = 1;
    for (auto i = s.begin(), j = s.end() - 1; i < j; i++, j--)
    {
        if (*i != *j)
        {
            checker = 0;
            break;
        }
    }

    if (checker == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
