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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        insert_at_head(head, tail, val);
        return;
    }

    tail->next = newNode;
    tail = tail->next;
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

void sorted_linked_list(Node *head)
{
    Node *tmp = head;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void unique(Node *head)
{
    Node *tmp = head;

    while (tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            tmp->next = tmp->next->next;
        }

        if (tmp->next == NULL)
            break;

        else if (tmp->val != tmp->next->val)
        {
            tmp = tmp->next;
        }
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    sorted_linked_list(head);
    unique(head);
    print_node(head);
    return 0;
}