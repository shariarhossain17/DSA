#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {50, 40, 45, 35, 42, 32, 25, 20, 10};

    int x;
    cin >> x;
    v.push_back(x);
    int curr_idx = v.size() - 1;

    while (curr_idx != 0)
    {
        int pr_idx = (curr_idx - 1) / 2;
        if (v[pr_idx] < v[curr_idx])
            swap(v[pr_idx], v[curr_idx]);
        else
            break;
        curr_idx = pr_idx;
    }

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}