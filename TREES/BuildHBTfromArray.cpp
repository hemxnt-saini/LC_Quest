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

node *buildTree(int a[], int s, int e)
{
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    node *root = new node(a[mid]);
    root->left = buildTree(a, s, mid - 1);
    root->right = buildTree(a, mid + 1, e);
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

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    node *root = buildTree(a, 0, n - 1);
    printBFS(root);
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// 3 4 -1 6 -1 -1 5 -1 -1 -1