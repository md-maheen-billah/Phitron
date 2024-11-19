#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int a[N];
  int count = 0;

  for (int i = 0; i < N; i++)
  {
    int X;
    cin >> X;
    if (X != 0)
    {
      a[count++] = X;
    }
  }
  for (int i = count; i < N; i++)
  {
    a[i] = 0;
  }
  for (int i = 0; i < N; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}