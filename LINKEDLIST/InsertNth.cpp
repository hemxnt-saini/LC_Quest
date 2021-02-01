#include <iostream>
using namespace std;

struct node *s = NULL;
struct node
{
    int data;
    struct node *link;
};

struct node *CreateNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}

void InsertNth(int data, int n)
{
}

void Print()
{
    struct node *loop = s;

    while (loop != NULL)
    {
        cout << loop->data << " ";
        loop = loop->link;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int n, m;
        cout << "Insert the data: ";
        cin >> n;
        cout << "Inserted at: ";
        cin >> m;
        InsertNth(n, m);
        Print();
        cout << endl;
    }
}