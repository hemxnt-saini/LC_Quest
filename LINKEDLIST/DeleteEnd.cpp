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

void InsertFirst(int data)
{
    struct node *temp;
    temp = CreateNode();
    temp->data = data;
    temp->link = NULL;

    if (s != NULL)
    {
        temp->link = s;
    }
    s = temp;
}

void DeleteEnd()
{
    struct node *temp = s;
    struct node *temp1;
    while (temp->link != NULL)
    {
        temp1 = temp;
        temp = temp->link;
    }
    temp1->link = NULL;
    free(temp);
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
        int n;
        cout << "Insert the data: ";
        cin >> n;
        InsertFirst(n);
        Print();
        cout << endl;
    }
    cout << "Data after last Deletion: ";
    DeleteEnd();
    Print();
}