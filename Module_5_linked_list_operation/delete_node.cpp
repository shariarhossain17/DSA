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

void insert_tail(Node *&head, int v)
{
    Node *new_node = new Node(v);

    if (head == NULL)
    {
        head = new_node;
        cout << "head inserted" << endl
             << endl;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = new_node;
    cout << "value insert at tail" << endl;
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

void insert_head(Node *&head, int val)
{
    Node *new_node = new Node(val);

    new_node->next = head;

    head = new_node;

    cout << "head inserted another function";
}

void delete_node(Node *head, int pos)
{

    Node *tmp = head; // 10,20,30,40,50  index=2

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *delete_node = tmp->next;

    tmp->next = tmp->next->next;
    delete delete_node;
}

void delete_head(Node *&head)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option 1: provide your value" << endl;
        cout << "option 2: print your linked list" << endl;
        cout << "option 3: insert any postion" << endl;
        cout << "option 5: delete any postion" << endl;
        cout << "option 4:terminate " << endl;

        int opt;
        cin >> opt;

        if (opt == 1)
        {
            cout << "please enter your value" << endl;
            int v;
            cin >> v;

            insert_tail(head, v);
        }

        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {

            cout << "provide your position" << endl;
            int pos;
            cin >> pos;
            cout << "provide your value" << endl;
            int val;
            cin >> val;

            if (pos == 0)
            {
                insert_head(head, val);
            }
            else
            {
                insert_any_position(head, pos, val);
            }
        }

        else if (opt == 5)
        {

            cout << "provide your delete position" << endl;
            int pos;
            cin >> pos;

            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_node(head, pos);
            }
        }

        else if (opt == 4)
        {
            break;
        }
    }
    return 0;
}