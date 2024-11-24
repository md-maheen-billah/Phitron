#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    stringstream ss(s); // separating each individual words in a string
    string word;
    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }
    cout << count << endl; // couting the number of words inside the string
    return 0;
}