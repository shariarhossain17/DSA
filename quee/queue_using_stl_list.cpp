#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    list<int> myList;
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_front();
    }

    int first()
    {
        return myList.front();
    }

    int size()
    {
        return myList.size();
    }
    bool empty()
    {
        if (myList.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    MyQueue Q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        Q.push(val);
    }

    while (!Q.empty())
    {
        cout << Q.first() << " " << endl;
        Q.pop();
    }

    return 0;
}