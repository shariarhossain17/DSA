#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList; // initialize first step as a 0

    // list<int> myList(5, 5); initialize as size and value

    // copy
    // {list<int> l = {1, 2, 3, 4, 5};
    // list<int> myList(l);  copy}

    // copy from array

    // int ar[5] = {1, 10, 3, 4, 5};
    // list<int> myList(ar, ar + 5);

    // copy from vector
    vector<int> v = {10, 20, 30, 40};
    list<int> myList(v.begin(), v.end());
    // iterate

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (int i : myList)
    {
        cout << i << " ";
    }

    return 0;
}