#include <iostream>
using namespace std;

struct node *START = NULL;
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
    struct node *p = START;
    struct node *temp = CreateNode();
    temp->data = data;
    temp->link = NULL;
    cout << "TEMP:" << temp << endl;
    if (n == 1)
    {
        temp->link = START;
        START = temp;
        cout << "HELLO:" << endl;
        cout << "TEMP1:DATA-" << temp->data << endl;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            p = p->link;
        }
        temp->link = p->link;
        p->link = temp;
        cout << "TEMP2:DATA-" << temp->data << endl;
    }
}
void Print()
{
    struct node *p = START;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->link;
    }
}

int main()
{

    InsertNth(10, 1);
    InsertNth(50, 4);
    InsertNth(40, 3);
    Print();
}