#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    cin.getline(s,100); //only use this when there is space in string
    cout << x << endl << s <<endl;
    return 0;
}