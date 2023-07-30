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
int main()
{

    Node *root = new Node(10);
    Node *left = new Node(20);
    Node *right = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = left;
    root->right = right;
    left->right = c;
    c->left = i;
    right->left = d;
    right->right = e;
    d->left = h;
    c->left = f;
    c->right = g;

    return 0;
}