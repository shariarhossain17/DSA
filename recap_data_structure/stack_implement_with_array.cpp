#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
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