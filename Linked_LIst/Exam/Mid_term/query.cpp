#include <iostream>
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

void insertAtHead(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        insertAtHead(head, tail, value);
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void printListLeftToRight(Node *head)
{
    if (head == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    cout << "L -> ";
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void printListRightToLeft(Node *tail)
{
    if (tail == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    cout << "R -> ";
    Node *current = tail;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->prev;
    }
    cout << endl;
}

bool isValidIndex(Node *head, int index)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
        {
            return true;
        }
        count++;
        current = current->next;
    }
    return false;
}

void performQueries(Node *&head, Node *&tail, int Q)
{
    for (int i = 0; i < Q; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x > 0 || x > 1)
        {
            cout << "Invalid" << endl;
            continue;
        }

        if (x == 0)
            insertAtHead(head, tail, v);
        else if (x == 1)
            insertAtTail(head, tail, v);

        printListLeftToRight(head);
        printListRightToLeft(tail);
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    performQueries(head, tail, Q);

    return 0;
}
