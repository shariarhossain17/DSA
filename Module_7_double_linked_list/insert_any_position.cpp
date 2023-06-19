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

void print_node(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_any_position(Node *head, int pos, int val)
{
    Node *new_node = new Node(val); // 100

    Node *tmp = head;
    // 10 20 30;
    for (int i = 0; i < pos - 1; i++) // 10 (next 20)
    {
        tmp = tmp->next;
    }

    new_node->next = tmp->next; // 100 next(20)
    tmp->next = new_node;       // 10 ,100,20,30,40
    new_node->next->prev = new_node;
    new_node->prev = tmp;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    insert_any_position(head, 1, 100);
    print_node(head);
    print_reverse(tail);
    return 0;
}