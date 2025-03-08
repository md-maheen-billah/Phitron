#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
        return n; // if value of n is less than 2 then return the value
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(6);
    return 0;
}