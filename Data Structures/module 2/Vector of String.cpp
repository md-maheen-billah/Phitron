#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n); // if size is declared using n follow this method
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    for (string s : v)
    {
        cout << s << endl;
    }

    return 0;
}
