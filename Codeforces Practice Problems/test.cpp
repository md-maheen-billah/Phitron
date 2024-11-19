#include <bits/stdc++.h>
using namespace std;

void fun(int A[], int n)
{
  int min = INT_MAX;
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (A[i] < min)
    {
      min = A[i];
    }
    if (A[i] > max)
    {
      max = A[i];
    }
  }
  cout << min << " " << max;
}

int main()
{
  int N;
  cin >> N;
  int *a = new int[N];
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  fun(a, N);
  return 0;
}