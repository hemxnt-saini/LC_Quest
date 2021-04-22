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

void deleteAtHead(node *&head)
{

    if (head == NULL)
    {
        return;
    }

    node *temp = head;
    head = temp->next;
    delete temp;
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
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    print(head);
    cout << endl;
    deleteAtHead(head);
    deleteAtHead(head);
    print(head);
}