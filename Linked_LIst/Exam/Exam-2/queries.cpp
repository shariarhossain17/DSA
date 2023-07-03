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

void insertAtHead(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
        tail = head;
}

void insertAtTail(Node *&head, Node *&tail, int value)
{
    if (tail == NULL)
    {
        insertAtHead(head, tail, value);
        return;
    }

    Node *newNode = new Node(value);
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void getHeadTail(Node *head, Node *tail)
{
    cout << head->val << " " << tail->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
            insertAtHead(head, tail, v);
        else if (x == 1)
            insertAtTail(head, tail, v);

        getHeadTail(head, tail);
    }

    return 0;
}