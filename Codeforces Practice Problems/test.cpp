#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    int N;
    cin >> N;
    vector<int> B(N - 1); // The shuffled array B
    for (int i = 0; i < N - 1; ++i)
    {
      cin >> B[i];
    }

    // Array to store the result
    vector<int> A(N);

    // Sort B to bring consecutive pairs together
    sort(B.begin(), B.end());

    // Calculate A[0] and A[1]
    A[0] = 1; // Start with the smallest possible positive number
    A[1] = B[0] - A[0];

    // Compute the rest of the array
    for (int i = 2; i < N; ++i)
    {
      A[i] = B[i - 1] - A[i - 1];
    }

    // Output the result
    for (int i = 0; i < N; ++i)
    {
      cout << A[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
