#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s[1] << endl;      // printing an index using []
    cout << s.at(1) << endl;   // printing an index using at()
    cout << s.front() << endl; // printing the first index using front()
    cout << s.back() << endl;  // printing the last index using back()
    return 0;
}