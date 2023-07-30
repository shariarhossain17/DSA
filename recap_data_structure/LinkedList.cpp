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

void insert_at_tail(Node *tail, int val)
{
    Node *newNode = new Node(val);

    tail->next = newNode;
    tail = tail->next;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_node(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void delete_head(Node *&head)
{
    Node *delete_node = head;

    head = head->next;
    delete delete_node;
}

void delete_any_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
}

int size_node(Node *head)
{
    int sz = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;
    insert_at_tail(tail, 70);
    insert_any_position(head, 2, 15);
    delete_any_position(head, 2);
    delete_head(head);
    print_node(head);

    cout << size_node(head);
    return 0;
}