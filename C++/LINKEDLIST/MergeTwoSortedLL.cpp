#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtHead(node *&head, int d)
{
    if (head == NULL)
    {
        node *n = new node(d);
        head = n;
        return;
    }

    node *temp = new node(d);
    temp->next = head;
    head = temp;
    return;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *merge(node *a, node *b)
{
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }

    node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertAtHead(head1, 7);
    insertAtHead(head1, 4);
    insertAtHead(head1, 3);
    insertAtHead(head1, 1);
    insertAtHead(head2, 10);
    insertAtHead(head2, 8);
    insertAtHead(head2, 2);
    insertAtHead(head2, 0);
    print(head1);
    cout << endl;
    print(head2);
    cout << endl;
    node *ans = merge(head1, head2);
    print(ans);
}