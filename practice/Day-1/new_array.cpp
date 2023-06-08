#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v2;

    v2 = v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        v2.insert(v2.end(), v[i]);
    }

    for (int i : v2)
    {
        cout << i << " ";
    }

    return 0;
}