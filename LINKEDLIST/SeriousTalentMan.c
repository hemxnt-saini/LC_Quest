#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *START = NULL;

void Insert(int n)
{
    struct node *nd;
    struct node *temp;
    nd = (struct node *)malloc(sizeof(struct node *));
    if (START == NULL)
    {
        nd->data = n;
        nd->link = NULL;
        START = nd;
        temp = START;
    }
    temp->link = nd;
    temp = temp->link;
    nd->data = n;
    nd->link = NULL;
}

void Print()
{
    struct node *temp = START;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        printf(" ");
        temp = temp->link;
    }
}

void main()
{
    Insert(3);
    Insert(4);
    Insert(2);
    Insert(5);
    Insert(5);
    Print();
}
