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

void InsertFirst(int data)
{
    struct node *temp;
    struct node *sp = START;
    temp = CreateNode();
    if (sp == NULL)
    {
        temp->data = data;
        temp->link = NULL;
        sp = temp;
    }
    else
    {
        temp->data = data;
        temp->link = sp->link;
        sp = temp;
    }
    // START = sp;

    if (START == NULL)
    {
        cout << "ERROR:";
    }

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

// void Print()
// {
//     struct node *temp = START;
//     if (temp == NULL)
//     {
//         cout << "Empty";
//     }
//     else
//     {
//         while (temp != NULL)
//         {
//             cout << temp->data << " ";
//             temp = temp->link;
//         }
//     }
// }
int main()
{
    InsertFirst(20);
    InsertFirst(40);
    InsertFirst(60);
    InsertFirst(80);
    // Print();
}