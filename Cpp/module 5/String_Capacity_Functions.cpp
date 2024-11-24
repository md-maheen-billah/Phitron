#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    cout << s.size() << endl; // printing size of string
    s.resize(3);
    cout << s << endl; // printing a string after resizing smaller
    s.resize(8);
    cout << s << endl; // printing a string after resizing larger
    s.resize(3);
    s.resize(8, 'x');
    cout << s << endl; // printing a string after resizing larger and filling null values with 'x'
    s.clear();         // clears value inside the string ⬇️
    cout << s << endl; // prints nothing
    if (s.empty() == true)
    { // checking if a string is empty. returns tur or false
        cout << "Empty" << endl;
    }
    return 0;
}