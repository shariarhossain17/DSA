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

Node *input_binary_tree()
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

        int l, r;
        cin >> l >> r;
        // ja kaj
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
        // queue te push kora

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

        // ber kora ana
        Node *f = q.front();
        q.pop();

        // jabotio ja kaj

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

bool search_bst(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;

    if (root->val < x)
    {
        return search_bst(root->left, x);
    }
    else
    {
        return (root->right, x);
    }
}
int main()
{
    Node *root = input_binary_tree();

    // level_order(root);

    if (search_bst(root, 3))
        cout << "yes!!! found";
    else
        cout << "opps!!! not found";

    return 0;
}