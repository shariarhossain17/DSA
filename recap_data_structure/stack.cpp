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

class Stack
{
public:
    Node *head;
    Node *tail;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;

        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
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