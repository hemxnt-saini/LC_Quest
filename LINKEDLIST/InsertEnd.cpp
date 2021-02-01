#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *START = NULL;

struct node *CreateNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}

void InsertEnd(int data)
{
    struct node *temp = CreateNode();
    temp->data = data;
    temp->link = NULL;

    if (START == NULL)
    {
        START = temp;
    }
    else
    {
        struct node *index = START;
        while (index->link != NULL)
        {
            index = index->link;
        }
        index->link = temp;
    }
}

void Print()
{
    struct node *temp = START;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int n;
        cout << "Insert the data: ";
        cin >> n;
        InsertEnd(n);
        Print();
        cout << endl;
    }
}
