#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l; //declaring a linked list
    cout << l.size() << endl;


    list<int> l2(10); //declaring a linked list with size
    cout << l2.size() << endl;


    list<int> l3(10,3); // declaringf a linked linked list with size and value
    for(int val : l3)  // printing values of a linked list
    {
        cout << val << " ";
    }
    cout << endl;


    list<int> l4 = {1,2,3,4,5}; //declaring a linked list with pre set values
    list<int> l5(l4); //copying a lindked list from another linked list
    for(int val : l5)  // printing values of a linked list
    {
        cout << val << " ";
    }
    cout << endl;


    int a[]={10,20,30,40};
    list<int> l6(a,a+4); //copying an array inside a linked list
    for(int val : l6)  // printing values of a linked list
    {
        cout << val << " ";
    }
    cout << endl;


    vector<int> v = {2,4,6,8};
    list<int> l7(v.begin(),v.end());//copying a vector inside a linked list
    for(int val : l7)  // printing values of a linked list
    {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}