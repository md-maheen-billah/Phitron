#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1,2,3,4,5}; 
    list<int> l2; 
    // l2 = l;
    l2.assign(l.begin(),l.end());

    for(int val:l2)
    {
        cout << val << " ";
    }
    cout << endl ;


    l2.push_back(6);
    l2.push_front(0);
    for(int val:l2)
    {
        cout << val << " ";
    }
    cout << endl ;


    l2.pop_back();
    l2.pop_front();
    for(int val:l2)
    {
        cout << val << " ";
    }
    cout << endl ;


    cout << *next(l2.begin(),2) <<endl; //printing a specific position inside a list


    l2.insert(next(l2.begin(),2),100); //inserting a value in a specific position inside a list
    for(int val:l2)
    {
        cout << val << " ";
    }
    cout << endl ;


    list<int> l3 = {6,7,8,9}; 
    l2.insert(next(l2.begin(),2),l3.begin(),l3.end()); //inserting a whole list in a specific position inside a list
    for(int val:l2)
    {
        cout << val << " ";
    }
    cout << endl ;


    vector<int> v = {0,0,0,0}; 
    l2.insert(next(l2.begin(),2),v.begin(),v.end()); //inserting a vector in a specific position inside a list
    for(int val:l2)
    {
        cout << val << " ";
    }
    cout << endl ;

    return 0;
}