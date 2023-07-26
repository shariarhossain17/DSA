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
    int x;
    cin >> x;

    Node *root;

    if (x == -1)
        root == NULL;
    else
        root = new Node(x);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        // amr ja kaj ta

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
        // q te push kora

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        // ja kicu kora

        cout << f->val << " ";

        // children gula k rakha

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}