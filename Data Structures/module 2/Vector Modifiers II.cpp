#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};
    replace(v.begin(), v.end(), 2, 100); // denoate the range and the number to replace, in this case we replace 2 with 100
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v2 = {1, 2, 3, 2, 5, 2};
    replace(v2.begin(), v2.end() - 1, 2, 100); // denoate the range and the number to replace, in this case we replace first two 2 with 100
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it = find(v2.begin(), v2.end(), 4); // range and the number
    if (it == v2.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }

    return 0;
}
