#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    cout << l.front() << endl;
    cout << *l.begin() << endl;
    cout << l.back() << endl;
    cout << *l.end() << endl;
    cout << *next(l.begin(),2) << endl;

    return 0;
}