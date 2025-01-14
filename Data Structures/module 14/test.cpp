#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        bool valid = true;
        for (char c : s)
        {
            if (c == '1')
            {
                if (!st.empty())
                    st.pop();
                else
                {
                    valid = false;
                    break;
                }
            }
            else
                st.push(c);
        }
        if (st.empty() && valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}