#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    queue<int> q2;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        q2.push(q.front());
        q.pop();
    }
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}