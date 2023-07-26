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

Node *intput_tree()
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

        // amr ja kaj ta
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
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
        // children gula push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int findMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;

    if (root->left == NULL && root->right == NULL)
    {
        return root->val;
    }

    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);

    int maxValue = max(leftMax, rightMax);

    return maxValue;
}

int findMinLeaf(Node *root)
{
    if (root == NULL)
        return INT_MAX;

    if (root->left == NULL && root->right == NULL)
        return root->val;

    int leftMin = findMinLeaf(root->left);
    int rightMin = findMinLeaf(root->right);

    return min(leftMin, rightMin);
}

int main()
{
    Node *root = intput_tree();

    int max = findMax(root);
    int min = findMinLeaf(root);

    cout << max << " " << min;
    return 0;
}