#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s("Hello World", 4); // we can resize a string here using constructor
    // output -> Hell
    cout << s << endl;
    string x("Hello World");
    string y(x, 4); // here we can take another string inside our string and get rid of a number of characters at the begining
    cout << y << endl;
    // output -> o World
    string z(5, 'A'); // will declare a string of a given number of size and the provided character
    cout << z << endl;
    // output -> AAAAA
    return 0;
}