#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    // cout << v.size();

    // cout << v.max_size();

    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // v.clear();
    v.resize(7, 10);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}