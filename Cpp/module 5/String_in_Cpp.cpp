#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Gello Gello";
    cout << s << endl;
    s = "Hello"; // we can easily change value of string in cpp
    string s2 = "Hello";
    if (s == s2) // checking if string is the same
    {
        cout << "Same" << endl;
    }
    else
        cout << "Different" << endl;
    return 0;
}