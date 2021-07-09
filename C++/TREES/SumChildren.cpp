#include <iostream>
#include <queue>
using namespace std;

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

int sumChildren(node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return root->data;

    int leftSum = sumChildren(root->left);
    int rightSum = sumChildren(root->right);
    int temp = root->data;

    root->data = leftSum + rightSum;

    return temp + root->data;
}

int main()
{
    node *root = buildTree();
    printBFS(root);
    cout << endl;
    sumChildren(root);
    printBFS(root);
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// 3 4 -1 6 -1 -1 5 -1 -1 -1