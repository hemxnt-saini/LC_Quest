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

void deleteAtMiddle(node *&head, int p)
{

    if (head == NULL or p == 0)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;

    int jump = 1;

    while (jump <= p - 1)
    {
        temp = temp->next;
        jump++;
    }
    node *cur = temp->next;

    temp->next = cur->next;
    delete cur;

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
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 8);
    print(head);
    cout << endl;
    deleteAtMiddle(head, 0);
    print(head);
    cout << endl;

    deleteAtMiddle(head, 4);
    print(head);
}