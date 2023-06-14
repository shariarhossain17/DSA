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

void insert_at_tail(Node *&head, int v)
{

    Node *new_node = new Node(v);
    if (head == NULL)
    {
        head = new_node;
        cout << "inserted at Head " << endl
             << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = new_node;
    cout << "inserted at Tail " << endl
         << endl;
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
void insert_any_position(Node *head, int pos, int val)
{
    Node *new_node = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option 1: provide value" << endl;
        cout << "option 2: print your linked list" << endl;
        cout << "option 3: insert any postion" << endl;
        cout << "option 4:terminate " << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            cout << "enter your position";
            int pos;
            cin >> pos;
            cout << "enter your value";
            int val;
            cin >> val;
            insert_any_position(head, pos, val);
        }
        else if (opt == 4)
        {
            break;
        }
    }
    return 0;
}
