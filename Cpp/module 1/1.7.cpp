#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d ;
    cout << min(a,b) << " "<< max(a,b)<<endl; //using only 2 inputs
    cout << min({a,b,c,d}) << " "<< max({a,b,c,d})<<endl; //using more than 2 inputs
    swap(a,b);
    cout << a <<" "<<  b <<endl; //using only 2 inputs
    return 0;
}