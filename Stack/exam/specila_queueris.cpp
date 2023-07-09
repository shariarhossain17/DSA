#include <bits/stdc++.h>
using namespace std;

bool isValidString(string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == 'A')
        {
            if (!st.empty() && st.top() == 'B')
                st.pop();
            else
                st.push(c);
        }
        else if (c == 'B')
        {
            if (!st.empty() && st.top() == 'A')
                st.pop();
            else
                st.push(c);
        }
    }

    return st.empty();
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        if (isValidString(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}