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
        tail = tail->next;
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