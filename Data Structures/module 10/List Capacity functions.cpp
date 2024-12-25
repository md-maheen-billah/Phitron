#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 4, 6, 8};
    list<int> l(v.begin(), v.end());


    cout << l.size() << endl;
    for(int val : l)  
    {
        cout << val << " ";
    }
    cout << endl;


    l.resize(2);//resizes a list
    cout << l.size() << endl;
    for(int val : l)  
    {
        cout << val << " ";
    }
    cout << endl;


     l.resize(5);//resizes a list
    cout << l.size() << endl;
    for(int val : l)  
    {
        cout << val << " ";
    }
    cout << endl;


    l.resize(2);//resizes a list
    l.resize(5,10);//resizes a list with specific value
    cout << l.size() << endl;
    for(int val : l)  
    {
        cout << val << " ";
    }
    cout << endl;


    l.clear(); // it clears a list
    cout << l.size() << endl;


    if (l.empty()) // to check if a list is empty
    {
        cout << "Empty" << endl;
    }

    return 0;
}