#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.capacity() << endl; // here capacity is zero
    v.push_back(10);
    cout << v.capacity() << endl; // here capacity is 1
    v.push_back(20);
    cout << v.capacity() << endl; // here capacity is 2
    v.push_back(30);
    cout << v.capacity() << endl; // here capacity is 4
    v.push_back(40);
    cout << v.capacity() << endl; // here capacity is 4
    cout << v.size() << endl;     // here vector size is 4
    v.resize(2);                  // resizing the vector
    cout << v.size() << endl;     // here vector size is 2
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(4); // here vector size is 4 filling the emty values with 0
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(6, 30); // here vector size is 6 filling the emty values with 30
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.clear();
    cout << v.size() << endl; // here vector size is 0 and it has been cleared but does not delete the memory
    cout << v[0] << endl;     // but it doesn't erase the data inside the vector, therefore v[0]=10
    return 0;
}

// when there is no space vector always increases the capacity by double of previous capacity. Then as long as the capacity created is not filled up, it will keep taking new values.