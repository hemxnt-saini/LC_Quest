#include <iostream>
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

int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lc = count(root->left);
    int rc = count(root->right);

    return lc + rc + 1;
}

int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int ls = sum(root->left);
    int rs = sum(root->right);

    return ls + rs + root->data;
}

void print(node *root)
{
    if (root == NULL)
    {
        return;
    }

    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main()
{
    node *root = buildTree();
    cout << count(root) << endl;
    cout << sum(root) << endl;
    print(root);
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// 3 4 -1 6 -1 -1 5 -1 -1 -1