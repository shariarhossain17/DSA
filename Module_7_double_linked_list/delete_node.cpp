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

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;

    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

void delete_node_any_position(Node *head, int pos)
{
    Node *tmp = head;

    // 10 20 30 40
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next; // 10->(20)
    }
    Node *delete_node = tmp->next; // 20

    tmp->next = tmp->next->next; // 10->20->30
    tmp->next->prev = tmp;       // 10<- 30
    delete delete_node;
}

void delete_tail(Node *&tail)
{
    Node *delete_tail = tail;

    tail = tail->prev;

    delete delete_tail;
    tail->next = NULL;
}

void delete_head(Node *&head)
{
    // 10 30 40
    Node *delete_head = head; // delete 10

    head = head->next; // 30 (previous)<-40
    delete delete_head;
    head->prev = NULL;
}
int main()

{

    // Node *head = NULL;
    // Node *tail = NULL;
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

    int pos, val;
    cin >> pos >> val;

    if (pos >= size(head))
    {
        cout << "INVALID" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }

    else if (pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_node_any_position(head, pos);
    }
    print_node(head);
    print_reverse(tail);
    return 0;
}