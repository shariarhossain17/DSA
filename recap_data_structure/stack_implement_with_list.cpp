#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
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

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}