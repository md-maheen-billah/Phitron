#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    int fre[100];
    fre[5] = 20;
    mp["tamim"] = 2; // logN
    mp["ramim"] = 5;
    mp["shamim"] = 50;
    // mp["hamim"] = 0;

    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // logN
    }

    if (mp.count("hamim"))
        cout << "Key is Present";
    else
        cout << "key is Absent";

    return 0;
}