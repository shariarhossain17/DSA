#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> st_2;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }

    while (!st.empty())
    {
        st_2.push(st.top());
        st.pop();
    }

    // copy stack
    while (!st_2.empty())
    {
        st.push(st_2.top());
        st_2.pop();
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}