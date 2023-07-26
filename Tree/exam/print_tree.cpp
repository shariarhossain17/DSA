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

// void level_order(Node *root)
// {
//     queue<Node *> q;

//     vector<int> v;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         // ja kicu kora

//         v.push_back(f->val);

//         // children gula k rakha

//         if (f->left)
//             q.push(f->left);

//         if (f->right)
//             q.push(f->right);
//     }

//     reverse(v.begin(), v.end());

//     for (int i : v)
//     {
//         cout << i << " ";
//     }
// }

// void in_order(Node *root)
// {
//     if (root == NULL)
//         return;

//     in_order(root->left);
//     cout << root->val << " ";
//     in_order(root->right);
// }

int getHeight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int getTotalNodes(int height)
{
    return (pow(2, height) - 1);
}

bool isPerfectBinaryTree(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }

    int height = getHeight(root);
    int totalNodes = getTotalNodes(height);

    queue<Node *> q;
    q.push(root);

    int nodeCount = 1;

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr->left != nullptr)
        {
            q.push(curr->left);
            nodeCount++;
        }

        if (curr->right != nullptr)
        {
            q.push(curr->right);
            nodeCount++;
        }

        if (nodeCount == totalNodes)
        {

            break;
        }
    }

    return (nodeCount == totalNodes);
}

int main()
{
    Node *root = intput_tree();
    if (isPerfectBinaryTree(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}