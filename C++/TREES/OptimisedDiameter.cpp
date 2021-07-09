#include <iostream>
using namespace std;

class Pair
{
public:
    int height;
    int diameter;
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

Pair diameter(node *root)
{
    Pair p;

    if (root == NULL)
    {
        p.diameter = p.height = 0;
        return p;
    }

    Pair left = diameter(root->left);
    Pair right = diameter(root->right);

    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
    return p;
}

int main()
{
    node *root = buildTree();
    print(root);
    cout << endl
         << "Diameter->" << diameter(root).diameter << endl;
}

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
// 3 4 -1 6 -1 -1 5 -1 -1 -1