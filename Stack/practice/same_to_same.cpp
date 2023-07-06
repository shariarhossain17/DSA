#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *delete_node = tail;
        tail = tail->prev;

        if (tail == NULL)
        {
            head == NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete delete_node;
    }
    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class MyStack2
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *delete_node = tail;
        tail = tail->prev;

        if (tail == NULL)
        {
            head == NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete delete_node;
    }
    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    MyStack st;
    MyStack2 st2;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    bool check = true;
    if (st.size() != st2.size())
    {
        cout << "NO";
    }

    else
    {
        while (!st.empty() && !st2.empty())
        {
            if (st.top() != st2.top())
            {
                check = false;
                break;
            }
            st2.pop();
            st.pop();
        }

        if (check == true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}