#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 10, 50};

    vector<int> x = {1, 2, 3, 4, 5};

    // x = v;

    // x.push_back(60);
    // x.pop_back();

    // x.insert(x.begin(), 1);
    // x.erase(x.begin() + 1, x.begin() + 3);

    // replace(v.begin(), v.end(), 10, 100);

    auto it = find(v.begin(), v.end(), 10);

    if (it == v.end())
        cout << "not found";
    else
        cout << "found";
    return 0;
}