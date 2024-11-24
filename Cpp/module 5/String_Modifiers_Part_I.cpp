#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    string s2 = "Hi";
    s += s2; // to add two strings
    cout << s << endl;
    s.append(s2); // we can also add two strings like this
    cout << s << endl;
    s.push_back('a'); // we can add a single character at the back of a string like this
    cout << s << endl;
    s.pop_back(); // we can remove a single character from the back of a string like this
    cout << s << endl;
    return 0;
}