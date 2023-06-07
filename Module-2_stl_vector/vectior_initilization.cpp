#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector constructor

    // vector<int> v; // type 1;
    // vector<int> v2(5);     // type 2
    // vector<int> v3(5, 10); // type 3

    vector<int> v(5);
    vector<int> v4(v);

    // int ar[5] = {1, 2, 3, 4, 5};

    // vector<int> v4(ar, ar + 5); type5

    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }

    cout << endl;
    cout << v4.size();
    return 0;
}