#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // using loop
    for (int i = 1; i <= n; i *= 2) // if an increment or decrement is through multiplication or division the complexity is O(logN). for example here, i is incremented by multiplying by 2. Therefore the base is 2 here. Therefore O(log₂N)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = n; i >= 1; i /= 3) // i is decremented by dividing by 3. Therefore the base is 3 here. Therefore O(log₃N)
    {
        cout << i << " ";
    }
    cout << endl;
    int k = 2;
    for (int i = 1; i < n; i++) // i is incremented by 1. But inside the loop we are multiplying i with k which has a value of 2(thus incrementing indirectly). Therefore the base is k which is 2 here. Therefore O(logₖN) or O(log₂N)
    {
        cout << i << " ";
        i = i * k;
    }

    return 0;
}

// O(logN) is order of logN