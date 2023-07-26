#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;

    mp.insert({"one", 1});
    mp.insert({"two", 2});
    mp.insert({"three", 3});
    mp.insert({"four", 4});

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " ";
    // }

    if (mp.count("one"))
        cout << "yes";
    return 0;
}