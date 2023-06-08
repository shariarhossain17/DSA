#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }

    for (int i = 0; i < x; i++)
    {
        int z;
        cin >> z;
        auto it = find(v.begin(), v.end(), z);
        if (it == v.end())
            cout << "not found" << endl;
        else
            cout << "found" << endl;
    }

    return 0;
}