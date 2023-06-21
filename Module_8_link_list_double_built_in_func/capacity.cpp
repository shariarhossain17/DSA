#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {10, 20, 30};

    // cout << my_list.max_size();

    // my_list.clear();

    my_list.resize(5, 100);
    for (int i : my_list)
    {
        cout << i << " ";
    }
    return 0;
}