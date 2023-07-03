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
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = new_node;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Your linked list is:";
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
        cout << "provide your option:" << endl;
        cout << "opt2:print value:" << endl;
        cout << "terminate opt3:" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "plese provide your val:";
            int v;
            cin >> v;
            insert_at_tail(head, v);
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
