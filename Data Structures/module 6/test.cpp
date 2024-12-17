#include <bits/stdc++.h>
using namespace std;

void fun(int *p) // chan ge doesn't occur when we dont use reference
{
    p = NULL;
}

void fun2(int *&p) // when using reference we can change
{
    p = NULL;
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In main: " << *p << endl;
    fun2(p);
    cout << "In main: " << p << endl;
    return 0;
}
