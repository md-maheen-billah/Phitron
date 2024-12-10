#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;   //type 1  initializing a vector
    // vector<int> v(5);  type 2   denoting the size
    vector<int> v(5, -1); // type 3  denoting the size and value of each element
    vector<int> v2(v);    // type 4  copying vectors
    int a[5] = {1,2,3,4,5};
    vector<int> v3(a,a+5);    // type 5  copying array inside a vector denoting the indexs
    vector<int> v4 = {1,2,3,4};  // manually declaring a vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    
    return 0;
}
