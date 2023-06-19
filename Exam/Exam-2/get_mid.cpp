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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;

    tail = newNode;
}

int size_of_linked_list(Node *head)
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

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void midlle_man(Node *head)
{

    Node *tmp = head;
    Node *tmp2 = head;

    int cnt = size_of_linked_list(head);
    int mid = size_of_linked_list(head) / 2;
    int mid_2 = size_of_linked_list(head) / 2 - 1;

    if (cnt % 2 == 0)
    {
        while (mid_2--)
        {
            tmp2 = tmp2->next;
        }
        cout << tmp2->val << " ";
        while (mid--)
        {
            tmp = tmp->next;
        }
        cout << tmp->val;
    }
    else
    {
        while (mid--)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
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
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(j->val, i->val);
            }
        }
    }

    midlle_man(head);

    return 0;
}
