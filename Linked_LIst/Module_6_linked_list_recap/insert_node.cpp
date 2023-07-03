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
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option 1:add linked_list" << endl;
        cout << "option 2:print linked list" << endl;

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

        else
        {
            break;
        }
    }

    return 0;
}