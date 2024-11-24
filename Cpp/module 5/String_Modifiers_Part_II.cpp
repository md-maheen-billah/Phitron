#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hi World";
    string s2 = "Hello World";

    s = s2; // we can easily assign a new value or a new string using equal sign
    cout << s << endl;
    s.assign(s2); // we can also assign a new value or a new string using assign
    cout << s << endl;
    s.replace(4, 1, " in the"); // we can replace a portion of a string using replace, denoting the starting index, number of characters to delete and the string to insert
    cout << s << endl;
    s.erase(4, 8); // we can erase a portion of a string using erase, denoting the starting index and number of characters to delete
    cout << s << endl;
    s.insert(4, "o "); // we can insert a portion of a string using insert, denoting the starting index and the string to insert
    cout << s << endl;
    return 0;
}