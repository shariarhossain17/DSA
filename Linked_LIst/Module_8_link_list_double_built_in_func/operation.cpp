#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 10, 30, 50, 30};

    myList.remove(30);

    // myList.sort(); sort

    myList.sort(greater<int>());

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}