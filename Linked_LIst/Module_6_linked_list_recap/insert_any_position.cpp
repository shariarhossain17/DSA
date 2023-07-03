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

void insert_tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;

        cout << "head inserted from tail function" << endl
             << endl;
        return;
    }

    Node *tmp = head; // 10 [] 20[null]

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
    cout << "value insert at tail" << endl
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

void insert_any_position(Node *head, int pos, int v)
{
    Node *new_node = new Node(v); // 10[100],20[c] ,30[d] 40[e],50[null]

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next = new_node;

    cout << "linkedlist insert" << pos;
}

void insert_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;

    cout << "head inserted" << endl;
}

void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++) // 10 20 30 40
    {
        tmp = tmp->next; // 10
    }
    Node *delete_element = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_element;
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
        cout << "option 1:add linked_list" << endl;
        cout << "option 2:print linked list" << endl;
        cout << "option 3:print linked list any position" << endl;

        int opt;
        cin >> opt;

        if (opt == 1)
        {
            cout << "please provide your value" << endl;
            int val;
            cin >> val;

            insert_tail(head, val);
        }

        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            cout << "enter your position" << endl;
            int pos;
            cin >> pos;
            cout << "enter your value" << endl;
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

        else if (opt == 4)
        {
            cout << "enter your position" << endl;
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
        else
        {
            break;
        }
    }

    return 0;
}