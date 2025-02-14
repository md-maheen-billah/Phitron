#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    while (n--)
    {

            string s;
            cin >> s;

            if (s == "push")
            {
                int x;
                cin >> x;
                a.push_back(x);
            }
            else if (s == "pop")
            {
                if (!a.empty())
                {
                    a.pop_back();
                }
            }
            else
            {
                if (!a.empty())
                {
                    for (auto &i : a)
                        cout << i << " ";
                    cout << endl;
                }
                else
                {
                    cout << "EMPTY" << endl;
                }
            }
        }

    return 0;
}