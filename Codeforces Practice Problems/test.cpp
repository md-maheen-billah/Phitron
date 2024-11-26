#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int eCount = 0;
  int gCount = 0;
  int yCount = 0;
  int pCount = 0;
  int tCount = 0;

  for (char c : s)
  {
    if ((c == 'e' || c == 'E'))
    {
      eCount++;
    }
    else if ((c == 'g' || c == 'G'))
    {
      gCount++;
    }
    else if ((c == 'y' || c == 'Y'))
    {
      yCount++;
    }
    else if ((c == 'p' || c == 'P'))
    {
      pCount++;
    }
    else if ((c == 't' || c == 'T'))
    {
      tCount++;
    }
  }

  cout << min({eCount, gCount, yCount, pCount, tCount});

  return 0;
}
