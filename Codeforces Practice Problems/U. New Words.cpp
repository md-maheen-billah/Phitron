#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int min = INT_MAX;
    int freq[26] = {0};
    for (char c : s)
    {
        if ((c >= 'a' && c <= 'z'))
        {
            int number = c - 'a';
            freq[number] += 1;
        }
        else if ((c >= 'A' && c <= 'Z'))
        {
            int number = c - 'A';
            freq[number] += 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            if (i == 4 || i == 6 || i == 24 || i == 15 || i == 19)
            {
                if (freq[i] < min)
                {
                    min = freq[i];
                }
            }
        }
    }

    cout << min;

    return 0;
}

//   string s;
//   cin >> s;
//   int eCount = 0;
//   int gCount = 0;
//   int yCount = 0;
//   int pCount = 0;
//   int tCount = 0;

//   for (char c : s)
//   {
//     if ((c == 'e' || c == 'E'))
//     {
//       eCount++;
//     }
//     else if ((c == 'g' || c == 'G'))
//     {
//       gCount++;
//     }
//     else if ((c == 'y' || c == 'Y'))
//     {
//       yCount++;
//     }
//     else if ((c == 'p' || c == 'P'))
//     {
//       pCount++;
//     }
//     else if ((c == 't' || c == 'T'))
//     {
//       tCount++;
//     }
//   }

//   cout << min({eCount, gCount, yCount, pCount, tCount});