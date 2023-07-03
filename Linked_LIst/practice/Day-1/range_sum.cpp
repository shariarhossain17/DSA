#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
    }
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}