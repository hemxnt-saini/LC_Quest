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

void deleteAtTail(node *&head)
{

    if (head == NULL)
    {
        return;
    }

    node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    cout << "Temp-Data" << temp->data << endl;
    node *cur = temp->next;
    cout << "Cur-Data" << cur->data << endl;

    temp->next = NULL;
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
    insertAtHead(head, 8);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    print(head);
    cout << endl;
    deleteAtTail(head);
    deleteAtTail(head);
    print(head);
}