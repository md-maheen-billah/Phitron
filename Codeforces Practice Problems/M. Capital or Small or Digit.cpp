#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char X;
    cin >> X ;
    if(X>='0' && X<='9'){
        cout << "IS DIGIT" << endl;
    }
    if(X>='A' && X<='Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    if(X>='a' && X<='z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
 
}