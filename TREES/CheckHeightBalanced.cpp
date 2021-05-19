#include <iostream>
#include <climits>
#include <queue>
using namespace std;

class Pair
{
public:
    int height;
    bool balance;
};

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void printBFS(node *root)
{
    queue<node *> q;

    q.push(root);

    while (!q.empty())
    {
        node *f = q.front();
        cout << f->data << " ";
        q.pop();

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return;
}

Pair checkHeightBalanced(node *root)
{
    Pair p;
    if (root == NULL)
    {
        p.height = 0;
        p.balance = true;
        return p;
    }

    Pair left = checkHeightBalanced(root->left);
    Pair right = checkHeightBalanced(root->right);

    if (abs(left.height - right.height) <= 1 && left.balance && right.balance)
    {
        p.balance = true;
    }
    else
    {
        p.balance = false;
    }

    return p;
}

int main()
{
    node *root = buildTree();
    printBFS(root);
    cout << endl;
    if (checkHeightBalanced(root).balance)
    {
        cout << "Height balanced tree!";
    }
    else
    {
        cout << "Not a height balanced tree!";
    }
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// 3 4 -1 6 -1 -1 5 -1 -1 -1