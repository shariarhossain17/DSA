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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

Node *reverse_list(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

bool is_palindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    Node *slow = head;
    Node *fast = head;
    Node *prev_slow = head;
    Node *mid = NULL;
    bool is_palindrome = true;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }
    if (fast != NULL)
    {
        mid = slow;
        slow = slow->next;
    }

    Node *second_half = reverse_list(slow);
    Node *p1 = head;
    Node *p2 = second_half;

    while (p2 != NULL)
    {
        if (p1->val != p2->val)
        {
            is_palindrome = false;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    reverse_list(second_half);

    if (mid != NULL)
    {
        prev_slow->next = mid;
        mid->next = second_half;
    }
    else
    {
        prev_slow->next = second_half;
    }

    return is_palindrome;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    bool result = is_palindrome(head);
    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
}