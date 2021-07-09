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

void insertAtTail(node *&head, int d)
{
    if (head == NULL)
    {

        node *n = new node(d);
        head = n;
        return;
    }

    node *n = new node(d);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

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

int main()
{
    node *head = NULL;

    insertAtTail(head, 5);
    insertAtTail(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    print(head);
}