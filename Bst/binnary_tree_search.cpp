#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        // ja kaj ta

        int l, r;
        cin >> l >> r;
        Node *left, *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}

void print_level_order(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        // ja kaj ta
        cout << f->val << " ";
        // children push
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    if (root->val > x)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();

    if (search(root, 12))
        cout << "found";
    else
        cout << "not found";
    return 0;
}