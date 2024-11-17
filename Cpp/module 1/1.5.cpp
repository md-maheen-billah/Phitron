#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x = 6;
    if(x%2==0){
        cout << "Even"<<endl ;
    }
    else {
        cout << "Odd"<<endl ;
    }

    //using ternary
    x%2==0 ? cout << "Even"<<endl : cout << "Odd"<<endl;
    return 0;
}