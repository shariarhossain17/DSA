#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int in;
    cin >> in;

    for (int i = m - 1; i >= 0; i--)
    {
        v.insert(v.begin() + in, v2[i]);
    }
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}