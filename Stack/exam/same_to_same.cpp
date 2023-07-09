#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class MyStack
{

public:
    Node *top = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->val = val;
        newNode->next = top;
        top = newNode;
        sz++;
    }

    void pop()
    {
        Node *tmp;
        if (top == NULL)
            return;
        tmp = top;
        top = top->next;
        delete tmp;
        sz--;
    }

    int getTop()
    {
        return top->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return top == NULL;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;

        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        return head->val;
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
    MyQueue q;

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 1; i <= m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
    }
    else
    {
        bool isValid = true;
        while (!st.empty() && !q.empty())
        {

            if (st.getTop() != q.front())
            {
                isValid = false;
                break;
            }
            st.pop();
            q.pop();
        }

        if (isValid)
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