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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    // 10

    new_node->next = head;
    head = new_node;
}

void insert_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        insert_head(head, tail, val);
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}

int size_node(Node *head)
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

void insert_any_position(Node *head, int pos, int val)
{
    Node *new_node = new Node(val);

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next; // 10 ->next(20)
    }
    new_node->next = tmp->next; // 40->(20)
    tmp->next = new_node;       // 10 ->next 40
}

void delete_any_position(Node *&head, int pos)
{

    Node *tmp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *_delete = tmp->next;

    tmp->next = tmp->next->next;
    delete _delete;
}

void delete_head(Node *&head)
{
    Node *delete_head = head;

    head = head->next;
    delete delete_head;
}

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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    insert_any_position(head, 1, 40);

    delete_any_position(head, 1);
    print_node(head);
    int size = size_node(head);

    return 0;
}