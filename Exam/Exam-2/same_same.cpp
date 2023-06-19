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
void insert_at_tail2(Node *&head, Node *&tail, int v)
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

void print_linked_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail2(head, tail, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head_1, tail_1, val);
    }

    int s = size_of_linked_list(head_1);

    Node *tmp = head;
    Node *tmp_1 = head_1;
    int flag = 0;
    while (tmp != NULL && tmp_1 != NULL)
    {
        if (tmp->val != tmp_1->val)
        {
            flag = 1;
        }
        tmp = tmp->next;
        tmp_1 = tmp_1->next;
    }

    int s1 = size_of_linked_list(head);

    if (s != s1)
    {
        cout << "NO";
    }
    else if (flag == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}