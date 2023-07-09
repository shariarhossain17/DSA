#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 1; i <= m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    if (st.size() != q.size())
    {
        cout << "NO";
    }
    else
    {
        bool isValid = true;
        while (!st.empty() && !q.empty())
        {

            if (st.top() != q.front())
            {
                isValid = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if (isValid)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}