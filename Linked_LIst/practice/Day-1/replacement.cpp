#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
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
        if (v[i] == 0)
        {
            replace(v.begin(), v.end(), v[i], 0);
        }
        else if (v[i] > 0)
        {
            replace(v.begin(), v.end(), v[i], 1);
        }
        else
        {
            replace(v.begin(), v.end(), v[i], 2);
        }
    }

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}