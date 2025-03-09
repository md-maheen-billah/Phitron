#include <bits/stdc++.h>
using namespace std;

int dp[1005];
int fibonacci(int n) //using memoization
{
    if (n < 2)
        return n; // if value of n is less than 2 then return the value.
    if(dp[n]!= -1)
        return dp[n];
    dp[n]= fibonacci(n - 1) + fibonacci(n - 2);
    return dp[n];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}