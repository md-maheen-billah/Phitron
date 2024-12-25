#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1,2,3,4,5,6,7,8,9,0,1,2,3,4}; 
    l.erase(next(l.begin(),9)); //deleting a specific position
    for(int val:l)
    {
        cout << val << " ";
    }
    cout << endl ;


    l.erase(next(l.begin(),9), next(l.begin(),13)); //deleting a number of specific positions in a row
    for(int val:l)
    {
        cout << val << " ";
    }
    cout << endl ;


    list<int> l2 = {1,20,3,4,20,6,7,20,9}; 
    replace(l2.begin(),l2.end(),20,100); //replace a value with another value
    for(int val:l2)
    {
        cout << val << " ";
    }
    cout << endl ;


    auto it = find(l2.begin(),l2.end(),100); //find a value
    if(it == l2.end())
    {
        cout << "Not Found" << endl;
    }
    else cout << "Found" << endl;

    return 0;
}