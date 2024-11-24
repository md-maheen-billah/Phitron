#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    for (int i = 0; i < s.size(); i++) // looping using index
    {
        cout << s[i];
    }
    cout << endl;
    cout << *s.begin() << endl;
    cout << *(s.end() - 1) << endl;
    for (string::iterator it = s.begin(); it < s.end(); it++) // looping using cpp string iterator
    {
        cout << *it;
    }
    cout << endl;
    for (auto it = s.begin(); it < s.end(); it++) // now we use an improved one
    {
        cout << *it;
    }
    return 0;
}