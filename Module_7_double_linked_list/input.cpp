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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    Node *tmp = head;
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    // value 10 20 30 40
    new_node->next = head; // 100 ->{10}
    head->prev = new_node; //{100} <-10
    head = new_node;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (tail == NULL)
    {
        insert_head(head, tail, val);
        return;
    }
    tail->next = new_node; // 40 -> 100
    new_node->prev = tail; // 40<-100
    tail = tail->next;     //  40->100
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
    print_node(head);
    print_reverse(tail);
    return 0;
}