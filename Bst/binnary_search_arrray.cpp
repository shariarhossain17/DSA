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

Node *convert(int ar[], int s, int l, int r)
{

    // [10,20,30,40,50]

        if (l > r)
        return NULL;
    int mid = (l + r) / 2;

    Node *root = new Node(ar[mid]);
    Node *leftNode = convert(ar, s, l, mid - 1);
    Node *rightNode = convert(ar, s, mid + 1, r);

    root->left = leftNode;
    root->right = rightNode;
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
int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    Node *root = convert(ar, n, 0, n - 1);

    print_level_order(root);

    return 0;
}