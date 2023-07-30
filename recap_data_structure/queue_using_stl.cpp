#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    queue<int> q;

    void push(int val)
    {
        q.push(val);
    }

    void pop()
    {
        q.pop();
    }

    int front()
    {
        return q.front();
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        if (size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{

    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}