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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}

void printK(node *root, int k)
{

    if (root == NULL)
        return;

    if (k == 1)
        cout << root->data << " ";

    printK(root->left, k - 1);
    printK(root->right, k - 1);
    return;
}

void printLevel(node *root)
{
    int h = height(root);
    for (int i = 0; i <= h; i++)
    {
        printK(root, i);
        cout << endl;
    }
}

int main()
{
    node *root = buildTree();
    printLevel(root);
}