#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> st;
    void push(int val)
    {
        st.push_back(val);
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        return st.back();
    }

    int size()
    {
        return st.size();
    }

    bool empty()
    {
        if (st.size() == 0)
            return true;
        else
            return false;
    }
};
class MyStack2
{
public:
    list<int> st;
    void push(int val)
    {
        st.push_back(val);
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        return st.back();
    }

    int size()
    {
        return st.size();
    }

    bool empty()
    {
        if (st.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{

    MyStack st;
    MyStack2 st_2;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    int m;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        st_2.push(v);
    }

    bool check = true;

    if (n != m)
    {
        cout << "NO";
    }
    else
    {
        while (!st.empty() && !st_2.empty())
        {
            if (st.top() != st_2.top())
            {
                check = false;
                break;
            }
            st.pop();
            st_2.pop();
        }

        if (check)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }

    return 0;
}